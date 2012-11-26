/*
 * Copyright (c) 2008-2012 Instrumentation Technologies
 * All Rights Reserved.
 *
 * $Id: libera_dummy.cpp 18000 2012-10-21 11:33:27Z hinko.kocevar $
 */

#include <isig/signal_source.h>
#include <isig/random_access_file.h>

#include <ireg/node.h>
#include <ireg/reg_node.h>
#include <ireg/remote_node.h>
#include <ireg/signal_node.h>
#include <ireg/reg_value_node.h>
#include <ireg/reg_reference_node.h>
#include <ireg/reg_reference_enum_node.h>
#include <ireg/reg_fnc_node.h>
#include <ireg/reg_value_enum_node.h>
#include <ireg/reg_fnc_enum_node.h>
#include <ireg/reg_config_node.h>
#include <ireg/reg_reference_bit_node.h>
#include <ireg/reg_exec_node.h>
#include "ireg/expression_operations.h"
#include "ireg/expression_terminals.h"

#include <ireg/ireg_util.h>

#include "libera_dummy.h"
#include "simul_stream.h"

static const std::string c_applicationName("libera-dummy");

/*-----------------------------------------------------------------------------*/
/* return application name                                                     */

const std::string& liberaDummy::ApplicationName() const {
	return c_applicationName;
}

/*-----------------------------------------------------------------------------*/
/* constructor                                                                 */

liberaDummy::liberaDummy() : LiberaApplication(c_applicationName)
{
	istd::TraceFile::GetInstance().SetPrintFile(true);
	istd::TraceFile::GetInstance().SetDumpStack(true);

	m_exitThread1 = false;
	m_longChg3 = 0;
	m_longChg4 = 0;
	m_longChg5 = 0;
	m_longChg6 = 0;
}

/*-----------------------------------------------------------------------------*/
/* destructor                                                                  */

liberaDummy::~liberaDummy()
{
	istd_FTRC();
}

/*-----------------------------------------------------------------------------*/
/* virtual event handler, triggered after all boards are instantiated and      */
/* before registry is defined                                                  */

void liberaDummy::OnPreInit()
{
	istd_FTRC();
}

/*-----------------------------------------------------------------------------*/
/* virtual event handler, triggered after all boards are instantiated and      */
/* registry is defined                                                         */

void liberaDummy::OnPostInit()
{
	istd_FTRC();

    // MCI registry is ready to be used from now on
    mci::Node root = GetRegistry();

	// Trace info - what is expored by platform daemon
	istd_TRC(istd::eTrcLow,
        "Exporting following nodes through the ireg:"
        << std::endl << root.DumpSubTree()
    );

}

/*-----------------------------------------------------------------------------*/
/* virtual event thread that sets values to some registry nodes to see the     */
/* changes and notifications appear                                            */

void liberaDummy::EventThread()
{
    istd_FTRC();
    double noiseAmplitude = 10658.123;

    while (1) {
    	if (m_exitThread1) {
    		break;
    	}

    	m_longChg3++;
    	m_nodeLongChg3->Emit();

    	m_longChg4++;
    	m_nodeLongChg4->Emit();

    	usleep(200000);

    	m_longChg5 = (int32_t)(noiseAmplitude *2/3*7 * (rand()/(double)RAND_MAX - 0.5));
    	m_nodeLongChg5->Emit();

    	m_longChg6 = (int32_t)(noiseAmplitude * (rand()/(double)RAND_MAX - 0.5));
    	m_nodeLongChg6->Emit();

    	usleep(300000);
    }
}

/*-----------------------------------------------------------------------------*/
/* virtual event handler, used for application initialization after            */
/* registry is updated with persistent configuration.                          */

void liberaDummy::OnPostConfig() {
	istd_FTRC();

	m_thread1 = std::thread(std::bind(&liberaDummy::EventThread, this));
}


/*-----------------------------------------------------------------------------*/
/* expose our functionality to outside world                                   */

void liberaDummy::OnRegistryAdd(ireg::TreeNodePtr &parent) {
	istd_FTRC();

	uint64_t f_read_write = mci::eNfDefault;
	uint64_t f_read_only = mci::eNfReadable;
	uint64_t f_write_only = mci::eNfWritable;

	/* Simulate some of Libera SPE production daemon MCI node locations that
	 * of interest to Tango DS */


	mci::Node boards = GetRegistry()["boards"];

	// boards.rfspe3.signals.adc
	SimulStream<Simul5LongSPE> *strm_rfspe3 = new SimulStream<Simul5LongSPE>();
	m_signals.emplace_back(static_cast<isig::SignalSourcePtr>(strm_rfspe3));
    boards.GetTreeNode()->Attach( Create<RegNode>("rfspe3")
    		->Attach( Create<RegNode>("signals")
    				->Attach(Create<SignalNode>("spe", strm_rfspe3)))
			->Attach( Create<RegNode>("attenuation")
					->Attach( Create<RegValueEnumNode<myEnum>>("att_id", myEnum1, f_read_write) ) ) );
    mci::Node signals3 = GetRegistry()["boards"]["rfspe3"]["signals"];
    // boards.rfspe3.signals.spe
	//auto dod_rfspe3 = std::make_shared<SimulDoDFile<Simul5Long>>(g_testLong);
    auto dod_rfspe3 = std::make_shared<SimulDoD>();
    m_signals.emplace_back(std::static_pointer_cast<isig::SignalSource>(dod_rfspe3));
	signals3.GetTreeNode()->Attach(Create<SignalNode>("adc", dod_rfspe3.get()));
	m_nodeLongChg3 = Create<RegReferenceInt32Node>("max_adc", m_longChg3, f_read_only);
	signals3.GetTreeNode()->Attach(m_nodeLongChg3);

	// boards.rfspe4.signals.adc
	SimulStream<Simul5LongSPE> *strm_rfspe4 = new SimulStream<Simul5LongSPE>();
	m_signals.emplace_back(static_cast<isig::SignalSourcePtr>(strm_rfspe4));
    boards.GetTreeNode()
    		->Attach( Create<RegNode>("rfspe4")
    				->Attach( Create<RegNode>("signals")
    						->Attach(Create<SignalNode>("spe", strm_rfspe4)))
    				->Attach( Create<RegNode>("attenuation")
    						->Attach( Create<RegValueEnumNode<myEnum>>("att_id", myEnum1, f_read_write) ) ) );
    mci::Node signals4 = GetRegistry()["boards"]["rfspe4"]["signals"];
    // boards.rfspe4.signals.spe
	//auto dod_rfspe4 = std::make_shared<SimulDoDFile<Simul5Long>>(g_testLong);
    auto dod_rfspe4 = std::make_shared<SimulDoD>();
    m_signals.emplace_back(std::static_pointer_cast<isig::SignalSource>(dod_rfspe4));
	signals4.GetTreeNode()->Attach(Create<SignalNode>("adc", dod_rfspe4.get()));
	m_nodeLongChg4 = Create<RegReferenceInt32Node>("max_adc", m_longChg4, f_read_only);
	signals4.GetTreeNode()->Attach(m_nodeLongChg4);

	// boards.rfspe5.signals.adc
	SimulStream<Simul5LongSPE> *strm_rfspe5 = new SimulStream<Simul5LongSPE>();
	m_signals.emplace_back(static_cast<isig::SignalSourcePtr>(strm_rfspe5));
    boards.GetTreeNode()
    		->Attach( Create<RegNode>("rfspe5")
    				->Attach( Create<RegNode>("signals")
    						->Attach(Create<SignalNode>("spe", strm_rfspe5)))
    				->Attach( Create<RegNode>("attenuation")
    						->Attach( Create<RegValueEnumNode<myEnum>>("att_id", myEnum1, f_read_write) ) ) );
    mci::Node signals5 = GetRegistry()["boards"]["rfspe5"]["signals"];
    // boards.rfspe5.signals.spe
	//auto dod_rfspe5 = std::make_shared<SimulDoDFile<Simul5Long>>(g_testLong);
    auto dod_rfspe5 = std::make_shared<SimulDoD>();
    m_signals.emplace_back(std::static_pointer_cast<isig::SignalSource>(dod_rfspe5));
	signals5.GetTreeNode()->Attach(Create<SignalNode>("adc", dod_rfspe5.get()));
	m_nodeLongChg5 = Create<RegReferenceInt32Node>("max_adc", m_longChg5, f_read_only);
	signals5.GetTreeNode()->Attach(m_nodeLongChg5);

	// boards.rfspe6.signals.adc
	SimulStream<Simul5LongSPE> *strm_rfspe6 = new SimulStream<Simul5LongSPE>();
	m_signals.emplace_back(static_cast<isig::SignalSourcePtr>(strm_rfspe6));
    boards.GetTreeNode()
    		->Attach( Create<RegNode>("rfspe6")
    				->Attach( Create<RegNode>("signals")
    						->Attach(Create<SignalNode>("spe", strm_rfspe6)))
    	    		->Attach( Create<RegNode>("attenuation")
    	    				->Attach( Create<RegValueEnumNode<myEnum>>("att_id", myEnum1, f_read_write) ) ) );
    mci::Node signals6 = GetRegistry()["boards"]["rfspe6"]["signals"];
    // boards.rfspe6.signals.spe
	//auto dod_rfspe6 = std::make_shared<SimulDoDFile<Simul5Long>>(g_testLong);
    auto dod_rfspe6 = std::make_shared<SimulDoD>();
    m_signals.emplace_back(std::static_pointer_cast<isig::SignalSource>(dod_rfspe6));
	signals6.GetTreeNode()->Attach(Create<SignalNode>("adc", dod_rfspe6.get()));
	m_nodeLongChg6 = Create<RegReferenceInt32Node>("max_adc", m_longChg6, f_read_only);
	signals6.GetTreeNode()->Attach(m_nodeLongChg6);

}

/*-----------------------------------------------------------------------------*/
/* virtual event handler, used for application specific shutdown procedure     */

void liberaDummy::OnShutdown() {
	istd_FTRC();

	m_exitThread1 = true;

    if (m_thread1.joinable()) {
       m_thread1.join();
    }

    for (auto i(m_signals.begin()); i != m_signals.end(); ++i) {
        (*i)->ShutDown();
    }
}

/*-----------------------------------------------------------------------------*/
/* no boards to create here */

iapp::LiberaBoard *liberaDummy::CreateBoard(const bmc::Board* a_board) {
	istd_FTRC();

	return NULL;
}

/*-----------------------------------------------------------------------------*/
/* Instantiate iapp:LiberaApplivarion in main()                                */

int main(int argc, char *argv[])
{
    auto ld( std::make_shared<liberaDummy>() );
    bool success = ld->Run(argc, argv);
    return (success ? EXIT_SUCCESS : EXIT_FAILURE);
}
