/*----- PROTECTED REGION ID(LiberaSinglePassE.cpp) ENABLED START -----*/
static const char *RcsId = "$Id:  $";
//=============================================================================
//
// file :        LiberaSinglePassE.cpp
//
// description : C++ source for the LiberaSinglePassE and its commands.
//               The class is derived from Device. It represents the
//               CORBA servant object which will be accessed from the
//               network. All commands which can be executed on the
//               LiberaSinglePassE are implemented in this file.
//
// project :     Libera Brillance Single Pass E.
//
// $Author:  $
//
// $Revision:  $
// $Date:  $
//
// SVN only:
// $HeadURL:  $
//
// CVS only:
// $Source:  $
// $Log:  $
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================


#include <LiberaSinglePassE.h>
#include <LiberaSinglePassEClass.h>

/*----- PROTECTED REGION END -----*/


/**
 *	LiberaSinglePassE class description:
 *	This Tango class is the interface of the Instrumentation Technologies (IT) Libera
 *	Brilliance Single Pass E equipment. This class supports only a subset of all the
 *	equipment features. It is the basic equipment for a Injection and Transfer Efficiency
 *	Measurement System
 */

//================================================================
//
//  The following table gives the correspondence
//  between command and method names.
//
//  Command name  |  Method name
//----------------------------------------------------------------
//  State         |  Inherited (no method)
//  Status        |  Inherited (no method)
//  Reset         |  reset
//  ResetTrigger  |  reset_trigger
//================================================================

namespace LiberaSinglePassE_ns
{
	/*----- PROTECTED REGION ID(LiberaSinglePassE::namespace_starting) ENABLED START -----*/

	//	static initializations

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::namespace_starting



//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::LiberaSinglePassE()
 *	Description : Constructors for a Tango device
 *	              implementing the class LiberaSinglePassE
 */
//--------------------------------------------------------
LiberaSinglePassE::LiberaSinglePassE(Tango::DeviceClass *cl, string &s)
	: Tango::Device_4Impl(cl, s.c_str()),
		attr_BufferSize_read(NULL),
		attr_Level_read(NULL),
		attr_TriggerCounter_read(NULL),
		attr_Fan1Speed_read(NULL),
		attr_Fan2Speed_read(NULL),
		attr_Temp1_read(NULL),
		attr_Temp2_read(NULL),
		attr_Temp3_read(NULL),
		attr_Up_read(NULL),
		attr_Down_read(NULL),
		attr_Left_read(NULL),
		attr_Right_read(NULL),
		attr_UpT_read(NULL),
		attr_DownT_read(NULL),
		attr_LeftT_read(NULL),
		attr_RightT_read(NULL),
		attr_Zposition_read(NULL),
		attr_Xposition_read(NULL),
		attr_Current_read(NULL),
		attr_SumT_read(NULL)
{
	/*----- PROTECTED REGION ID(LiberaSinglePassE::constructor_1) ENABLED START -----*/

	init_device();

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::constructor_1
}
//--------------------------------------------------------
LiberaSinglePassE::LiberaSinglePassE(Tango::DeviceClass *cl, const char *s)
	: Tango::Device_4Impl(cl, s),
		attr_BufferSize_read(NULL),
		attr_Level_read(NULL),
		attr_TriggerCounter_read(NULL),
		attr_Fan1Speed_read(NULL),
		attr_Fan2Speed_read(NULL),
		attr_Temp1_read(NULL),
		attr_Temp2_read(NULL),
		attr_Temp3_read(NULL),
		attr_Up_read(NULL),
		attr_Down_read(NULL),
		attr_Left_read(NULL),
		attr_Right_read(NULL),
		attr_UpT_read(NULL),
		attr_DownT_read(NULL),
		attr_LeftT_read(NULL),
		attr_RightT_read(NULL),
		attr_Zposition_read(NULL),
		attr_Xposition_read(NULL),
		attr_Current_read(NULL),
		attr_SumT_read(NULL)
{
	/*----- PROTECTED REGION ID(LiberaSinglePassE::constructor_2) ENABLED START -----*/

	init_device();

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::constructor_2
}
//--------------------------------------------------------
LiberaSinglePassE::LiberaSinglePassE(Tango::DeviceClass *cl, const char *s, const char *d)
	: Tango::Device_4Impl(cl, s, d),
		attr_BufferSize_read(NULL),
		attr_Level_read(NULL),
		attr_TriggerCounter_read(NULL),
		attr_Fan1Speed_read(NULL),
		attr_Fan2Speed_read(NULL),
		attr_Temp1_read(NULL),
		attr_Temp2_read(NULL),
		attr_Temp3_read(NULL),
		attr_Up_read(NULL),
		attr_Down_read(NULL),
		attr_Left_read(NULL),
		attr_Right_read(NULL),
		attr_UpT_read(NULL),
		attr_DownT_read(NULL),
		attr_LeftT_read(NULL),
		attr_RightT_read(NULL),
		attr_Zposition_read(NULL),
		attr_Xposition_read(NULL),
		attr_Current_read(NULL),
		attr_SumT_read(NULL)
{
	/*----- PROTECTED REGION ID(LiberaSinglePassE::constructor_3) ENABLED START -----*/

	init_device();

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::constructor_3
}


//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::delete_device()()
 *	Description : will be called at device destruction or at init command
 */
//--------------------------------------------------------
void LiberaSinglePassE::delete_device()
{
	/*----- PROTECTED REGION ID(LiberaSinglePassE::delete_device) ENABLED START -----*/
	DEBUG_STREAM << "LiberaSinglePassE::delete_device() delete device " << device_name << endl;

	//	Delete device allocated objects
	delete attr_BufferSize_read;
	attr_BufferSize_read = NULL;
	delete attr_Level_read;
	attr_Level_read = NULL;
	delete attr_TriggerCounter_read;
	attr_TriggerCounter_read = NULL;
	delete attr_Fan1Speed_read;
	attr_Fan1Speed_read = NULL;
	delete attr_Fan2Speed_read;
	attr_Fan2Speed_read = NULL;
	delete attr_Temp1_read;
	attr_Temp1_read = NULL;
	delete attr_Temp2_read;
	attr_Temp2_read = NULL;
	delete attr_Temp3_read;
	attr_Temp3_read = NULL;

	try {
		mci_AppRootNode.Destroy();
		mci::Disconnect(liberaIpAddr, mci::Root::Application);
	} catch (istd::Exception &e) {
		ERROR_STREAM << "LiberaSinglePassE::delete_device() failed disconnecting from MCI application host " << device_name << endl;
	}

	try {
		mci_PlatRootNode.Destroy();
		mci::Disconnect(liberaIpAddr, mci::Root::Platform);
	} catch (istd::Exception &e) {
		ERROR_STREAM << "LiberaSinglePassE::delete_device() failed disconnecting from MCI platform host " << device_name << endl;
	}

	// Set device state
	set_state(Tango::UNKNOWN);
	set_status("UNKNOWN");

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::delete_device

}


//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::init_device()
 *	Description : //	will be called at device initialization.
 */
//--------------------------------------------------------
void LiberaSinglePassE::init_device()
{
	DEBUG_STREAM << "LiberaSinglePassE::init_device() create device " << device_name << endl;

	/*----- PROTECTED REGION ID(LiberaSinglePassE::init_device_before) ENABLED START -----*/

	//	Initialization before get_device_property() call

	/* Access application MCI daemon */
	try {
		mci_AppRootNode = mci::Connect(liberaIpAddr, mci::Root::Application);
	} catch (istd::Exception &e){
		ERROR_STREAM << "LiberaSinglePassE::init_device() failed connecting to MCI host " << liberaIpAddr << " TDS " << device_name << endl;
		return;
	}

	/* Access platform MCI daemon */
	try {
		mci_PlatRootNode = mci::Connect(liberaIpAddr, mci::Root::Platform);
	} catch (istd::Exception &e){
		ERROR_STREAM << "LiberaSinglePassE::init_device() failed connecting to MCI host " << liberaIpAddr << " TDS " << device_name << endl;
		return;
	}

	/* SPE application daemon MCI nodes */
	try {
		//TODO: mci_LevelNode = mci_AppRootNode.GetNode(mci::Tokenize("boards.rfspe4.attenuation.att_id"));

	} catch (istd::Exception &e){
		ERROR_STREAM << "LiberaSinglePassE::init_device() failed connecting to MCI nodes " << liberaIpAddr << " TDS " << device_name << endl;
		return;
	}

	/* Platform daemon MCI nodes */
	try {
		mci_Fan1Node = mci_PlatRootNode.GetNode(mci::Tokenize("fans.left_front"));
		mci_Fan2Node = mci_PlatRootNode.GetNode(mci::Tokenize("fans.right_front"));

		mci_Temp1Node = mci_PlatRootNode.GetNode(mci::Tokenize("boards.icb0.sensors.ID_0.value"));
		mci_Temp2Node = mci_PlatRootNode.GetNode(mci::Tokenize("boards.icb0.sensors.ID_1.value"));
		mci_Temp3Node = mci_PlatRootNode.GetNode(mci::Tokenize("boards.icb0.sensors.ID_2.value"));
	} catch (istd::Exception &e){
		ERROR_STREAM << "LiberaSinglePassE::init_device() failed connecting to MCI nodes " << liberaIpAddr << " TDS " << device_name << endl;
		return;
	}

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::init_device_before

	//	Get the device properties (if any) from database
	get_device_property();


	/*----- PROTECTED REGION ID(LiberaSinglePassE::init_device) ENABLED START -----*/

	//	Initialize device
	attr_BufferSize_read = new Tango::DevLong(0);
	CHECK_ALLOC(attr_BufferSize_read);

	attr_Level_read = new Tango::DevLong(0);
	CHECK_ALLOC(attr_Level_read);

	attr_TriggerCounter_read = new Tango::DevULong(0);
	CHECK_ALLOC(attr_TriggerCounter_read);

	attr_Temp1_read = new Tango::DevUShort(0);
	CHECK_ALLOC(attr_Temp1_read);

	attr_Temp2_read = new Tango::DevUShort(0);
	CHECK_ALLOC(attr_Temp2_read);

	attr_Temp3_read = new Tango::DevUShort(0);
	CHECK_ALLOC(attr_Temp3_read);

	attr_Fan1Speed_read = new Tango::DevUShort(0);
	CHECK_ALLOC(attr_Fan1Speed_read);

	attr_Fan2Speed_read = new Tango::DevUShort(0);
	CHECK_ALLOC(attr_Fan2Speed_read);

	// Set device state
	set_state(Tango::ON);
	set_status(ON_STATUS);

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::init_device
}



//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::get_device_property()
 *	Description : //	Add your own code to initialize
 */
//--------------------------------------------------------
void LiberaSinglePassE::get_device_property()
{
	/*----- PROTECTED REGION ID(LiberaSinglePassE::get_device_property_before) ENABLED START -----*/

	//	Initialize property data members

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::get_device_property_before


	//	Read device properties from database.
	Tango::DbData	dev_prop;
	dev_prop.push_back(Tango::DbDatum("LiberaIpAddr"));
	dev_prop.push_back(Tango::DbDatum("LiberaMulticastIpAddr"));
	dev_prop.push_back(Tango::DbDatum("LiberaPort"));
	dev_prop.push_back(Tango::DbDatum("Location"));
	dev_prop.push_back(Tango::DbDatum("ServiceTaskSleep"));
	dev_prop.push_back(Tango::DbDatum("DataTaskHeartbeat"));
	dev_prop.push_back(Tango::DbDatum("BeamThreshold"));
	dev_prop.push_back(Tango::DbDatum("PositionK"));
	dev_prop.push_back(Tango::DbDatum("CurrentK"));
	dev_prop.push_back(Tango::DbDatum("CurrentTimeOffset"));

	//	is there at least one property to be read ?
	if (dev_prop.size()>0)
	{
		//	Call database and extract values
		if (Tango::Util::instance()->_UseDb==true)
			get_db_device()->get_property(dev_prop);

		//	get instance on LiberaSinglePassEClass to get class property
		Tango::DbDatum	def_prop, cl_prop;
		LiberaSinglePassEClass	*ds_class =
			(static_cast<LiberaSinglePassEClass *>(get_device_class()));
		int	i = -1;

		//	Try to initialize LiberaIpAddr from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  liberaIpAddr;
		else {
			//	Try to initialize LiberaIpAddr from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  liberaIpAddr;
		}
		//	And try to extract LiberaIpAddr value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  liberaIpAddr;

		//	Try to initialize LiberaMulticastIpAddr from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  liberaMulticastIpAddr;
		else {
			//	Try to initialize LiberaMulticastIpAddr from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  liberaMulticastIpAddr;
		}
		//	And try to extract LiberaMulticastIpAddr value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  liberaMulticastIpAddr;

		//	Try to initialize LiberaPort from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  liberaPort;
		else {
			//	Try to initialize LiberaPort from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  liberaPort;
		}
		//	And try to extract LiberaPort value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  liberaPort;

		//	Try to initialize Location from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  location;
		else {
			//	Try to initialize Location from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  location;
		}
		//	And try to extract Location value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  location;

		//	Try to initialize ServiceTaskSleep from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  serviceTaskSleep;
		else {
			//	Try to initialize ServiceTaskSleep from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  serviceTaskSleep;
		}
		//	And try to extract ServiceTaskSleep value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  serviceTaskSleep;

		//	Try to initialize DataTaskHeartbeat from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  dataTaskHeartbeat;
		else {
			//	Try to initialize DataTaskHeartbeat from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  dataTaskHeartbeat;
		}
		//	And try to extract DataTaskHeartbeat value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  dataTaskHeartbeat;

		//	Try to initialize BeamThreshold from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  beamThreshold;
		else {
			//	Try to initialize BeamThreshold from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  beamThreshold;
		}
		//	And try to extract BeamThreshold value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  beamThreshold;

		//	Try to initialize PositionK from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  positionK;
		else {
			//	Try to initialize PositionK from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  positionK;
		}
		//	And try to extract PositionK value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  positionK;

		//	Try to initialize CurrentK from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  currentK;
		else {
			//	Try to initialize CurrentK from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  currentK;
		}
		//	And try to extract CurrentK value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  currentK;

		//	Try to initialize CurrentTimeOffset from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  currentTimeOffset;
		else {
			//	Try to initialize CurrentTimeOffset from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  currentTimeOffset;
		}
		//	And try to extract CurrentTimeOffset value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  currentTimeOffset;


	}
	/*----- PROTECTED REGION ID(LiberaSinglePassE::get_device_property_after) ENABLED START -----*/

	//	Check device property data members init

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::get_device_property_after

}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::always_executed_hook()
 *	Description : method always executed before any command is executed
 */
//--------------------------------------------------------
void LiberaSinglePassE::always_executed_hook()
{
	INFO_STREAM << "LiberaSinglePassE::always_executed_hook()  " << device_name << endl;
	/*----- PROTECTED REGION ID(LiberaSinglePassE::always_executed_hook) ENABLED START -----*/

	//	code always executed before all requests

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::always_executed_hook
}



//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::read_attr_hardware()
 *	Description : Hardware acquisition for attributes.
 */
//--------------------------------------------------------
void LiberaSinglePassE::read_attr_hardware(vector<long> &attr_list)
{
	DEBUG_STREAM << "LiberaSinglePassE::read_attr_hardware(vector<long> &attr_list) entering... " << endl;
	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_attr_hardware) ENABLED START -----*/

	//	Add your own code

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_attr_hardware

}


//--------------------------------------------------------
/**
 *	Read BufferSize attribute
 *	Description: The Libera box ADC buffer size (between 10 and 8192)
 *
 *	Data type:	Tango::DevLong
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void LiberaSinglePassE::read_BufferSize(Tango::Attribute &attr)
{
	DEBUG_STREAM << "LiberaSinglePassE::read_BufferSize(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_BufferSize) ENABLED START -----*/

	//	Set the attribute value
	attr.set_value(attr_BufferSize_read);

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_BufferSize
}

//--------------------------------------------------------
/**
 *	Write BufferSize attribute values to hardware.
 *
 *	Data type:	Tango::DevLong
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void LiberaSinglePassE::write_BufferSize(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "LiberaSinglePassE::write_BufferSize(Tango::Attribute &attr) entering... " << endl;

	//	Retrieve write value
	Tango::DevLong	w_val;
	attr.get_write_value(w_val);
	*attr_BufferSize_read = w_val;

	/*----- PROTECTED REGION ID(LiberaSinglePassE::write_BufferSize) ENABLED START -----*/



	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::write_BufferSize
}

//--------------------------------------------------------
/**
 *	Read Level attribute
 *	Description: The analog channels level. This attribute allows the user to tune the analog channels\nattenuator. The input is an index within a lookup table in the Libera box
 *
 *	Data type:	Tango::DevLong
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void LiberaSinglePassE::read_Level(Tango::Attribute &attr)
{
	DEBUG_STREAM << "LiberaSinglePassE::read_Level(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Level) ENABLED START -----*/

	//	Set the attribute value
	attr.set_value(attr_Level_read);

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Level
}

//--------------------------------------------------------
/**
 *	Write Level attribute values to hardware.
 *
 *	Data type:	Tango::DevLong
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void LiberaSinglePassE::write_Level(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "LiberaSinglePassE::write_Level(Tango::Attribute &attr) entering... " << endl;

	//	Retrieve write value
	Tango::DevLong	w_val;
	attr.get_write_value(w_val);

	/*----- PROTECTED REGION ID(LiberaSinglePassE::write_Level) ENABLED START -----*/



	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::write_Level
}

//--------------------------------------------------------
/**
 *	Read TriggerCounter attribute
 *	Description: Trigger counter. Incremented at each trigger
 *
 *	Data type:	Tango::DevULong
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void LiberaSinglePassE::read_TriggerCounter(Tango::Attribute &attr)
{
	DEBUG_STREAM << "LiberaSinglePassE::read_TriggerCounter(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_TriggerCounter) ENABLED START -----*/

	//	Set the attribute value
	attr.set_value(attr_TriggerCounter_read);

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_TriggerCounter
}
//--------------------------------------------------------
/**
 *	Read Fan1Speed attribute
 *	Description: First fan speed
 *
 *	Data type:	Tango::DevUShort
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void LiberaSinglePassE::read_Fan1Speed(Tango::Attribute &attr)
{
	DEBUG_STREAM << "LiberaSinglePassE::read_Fan1Speed(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Fan1Speed) ENABLED START -----*/

	try {
		double v;
		mci_Fan1Node.Get(v);
		*attr_Fan1Speed_read = static_cast<Tango::DevUShort>(v);
	} catch (istd::Exception &e) {
		ERROR_STREAM << "LiberaSinglePassE::read_Fan1Speed() failed get value " << device_name << endl;
		return;
	}

	//	Set the attribute value
	attr.set_value(attr_Fan1Speed_read);

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Fan1Speed
}
//--------------------------------------------------------
/**
 *	Read Fan2Speed attribute
 *	Description: Second fan speed
 *
 *	Data type:	Tango::DevUShort
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void LiberaSinglePassE::read_Fan2Speed(Tango::Attribute &attr)
{
	DEBUG_STREAM << "LiberaSinglePassE::read_Fan2Speed(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Fan2Speed) ENABLED START -----*/

	try {
		double v;
		mci_Fan2Node.Get(v);
		*attr_Fan2Speed_read = static_cast<Tango::DevUShort>(v);
	} catch (istd::Exception &e) {
		ERROR_STREAM << "LiberaSinglePassE::read_Fan2Speed() failed get value " << device_name << endl;
		return;
	}

	//	Set the attribute value
	attr.set_value(attr_Fan2Speed_read);

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Fan2Speed
}
//--------------------------------------------------------
/**
 *	Read Temp1 attribute
 *	Description: The Libera box first temperature
 *
 *	Data type:	Tango::DevUShort
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void LiberaSinglePassE::read_Temp1(Tango::Attribute &attr)
{
	DEBUG_STREAM << "LiberaSinglePassE::read_Temp1(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Temp1) ENABLED START -----*/

	try {
		double v;
		mci_Temp1Node.Get(v);
		*attr_Temp1_read = static_cast<Tango::DevUShort>(v);
	} catch (istd::Exception &e) {
		ERROR_STREAM << "LiberaSinglePassE::read_Temp1() failed get value " << device_name << endl;
		return;
	}

	//	Set the attribute value
	attr.set_value(attr_Temp1_read);

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Temp1
}
//--------------------------------------------------------
/**
 *	Read Temp2 attribute
 *	Description: The Libera box second temperature
 *
 *	Data type:	Tango::DevUShort
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void LiberaSinglePassE::read_Temp2(Tango::Attribute &attr)
{
	DEBUG_STREAM << "LiberaSinglePassE::read_Temp2(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Temp2) ENABLED START -----*/

	try {
		double v;
		mci_Temp2Node.Get(v);
		*attr_Temp2_read = static_cast<Tango::DevUShort>(v);
	} catch (istd::Exception &e) {
		ERROR_STREAM << "LiberaSinglePassE::read_Temp2() failed get value " << device_name << endl;
		return;
	}

	//	Set the attribute value
	attr.set_value(attr_Temp2_read);

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Temp2
}
//--------------------------------------------------------
/**
 *	Read Temp3 attribute
 *	Description: The Libera box third temperature
 *
 *	Data type:	Tango::DevUShort
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void LiberaSinglePassE::read_Temp3(Tango::Attribute &attr)
{
	DEBUG_STREAM << "LiberaSinglePassE::read_Temp3(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Temp3) ENABLED START -----*/

	try {
		double v;
		mci_Temp3Node.Get(v);
		*attr_Temp3_read = static_cast<Tango::DevUShort>(v);
	} catch (istd::Exception &e) {
		ERROR_STREAM << "LiberaSinglePassE::read_Temp3() failed get value " << device_name << endl;
		return;
	}

	//	Set the attribute value
	attr.set_value(attr_Temp3_read);

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Temp3
}
//--------------------------------------------------------
/**
 *	Read Up attribute
 *	Description: The up StripLine ADC buffer
 *
 *	Data type:	Tango::DevShort
 *	Attr type:	Spectrum  max = 10000
 */
//--------------------------------------------------------
void LiberaSinglePassE::read_Up(Tango::Attribute &attr)
{
	DEBUG_STREAM << "LiberaSinglePassE::read_Up(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Up) ENABLED START -----*/

	//	Set the attribute value
	attr.set_value(attr_Up_read, 10000);

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Up
}
//--------------------------------------------------------
/**
 *	Read Down attribute
 *	Description: The down StripLine ADC buffer
 *
 *	Data type:	Tango::DevShort
 *	Attr type:	Spectrum  max = 10000
 */
//--------------------------------------------------------
void LiberaSinglePassE::read_Down(Tango::Attribute &attr)
{
	DEBUG_STREAM << "LiberaSinglePassE::read_Down(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Down) ENABLED START -----*/

	//	Set the attribute value
	attr.set_value(attr_Down_read, 10000);

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Down
}
//--------------------------------------------------------
/**
 *	Read Left attribute
 *	Description: The left StripLine ADC buffer
 *
 *	Data type:	Tango::DevShort
 *	Attr type:	Spectrum  max = 10000
 */
//--------------------------------------------------------
void LiberaSinglePassE::read_Left(Tango::Attribute &attr)
{
	DEBUG_STREAM << "LiberaSinglePassE::read_Left(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Left) ENABLED START -----*/

	//	Set the attribute value
	attr.set_value(attr_Left_read, 10000);

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Left
}
//--------------------------------------------------------
/**
 *	Read Right attribute
 *	Description: The right StripLine ADC buffer
 *
 *	Data type:	Tango::DevShort
 *	Attr type:	Spectrum  max = 10000
 */
//--------------------------------------------------------
void LiberaSinglePassE::read_Right(Tango::Attribute &attr)
{
	DEBUG_STREAM << "LiberaSinglePassE::read_Right(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Right) ENABLED START -----*/

	//	Set the attribute value
	attr.set_value(attr_Right_read, 10000);

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Right
}
//--------------------------------------------------------
/**
 *	Read UpT attribute
 *	Description: The up StripLine ADC buffer after some computation:\nsquare - double averaging filter - square root
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Spectrum  max = 10000
 */
//--------------------------------------------------------
void LiberaSinglePassE::read_UpT(Tango::Attribute &attr)
{
	DEBUG_STREAM << "LiberaSinglePassE::read_UpT(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_UpT) ENABLED START -----*/

	//	Set the attribute value
	attr.set_value(attr_UpT_read, 10000);

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_UpT
}
//--------------------------------------------------------
/**
 *	Read DownT attribute
 *	Description: The down StripLine ADC buffer after some computation:\nsquare - double averaging filter - square root
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Spectrum  max = 10000
 */
//--------------------------------------------------------
void LiberaSinglePassE::read_DownT(Tango::Attribute &attr)
{
	DEBUG_STREAM << "LiberaSinglePassE::read_DownT(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_DownT) ENABLED START -----*/

	//	Set the attribute value
	attr.set_value(attr_DownT_read, 10000);

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_DownT
}
//--------------------------------------------------------
/**
 *	Read LeftT attribute
 *	Description: The left StripLine ADC buffer after some computation:\nsquare - double averaging filter - square root
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Spectrum  max = 10000
 */
//--------------------------------------------------------
void LiberaSinglePassE::read_LeftT(Tango::Attribute &attr)
{
	DEBUG_STREAM << "LiberaSinglePassE::read_LeftT(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_LeftT) ENABLED START -----*/

	//	Set the attribute value
	attr.set_value(attr_LeftT_read, 10000);

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_LeftT
}
//--------------------------------------------------------
/**
 *	Read RightT attribute
 *	Description: The right StripLine ADC buffer after some computation:\nsquare - double averaging filter - square root
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Spectrum  max = 10000
 */
//--------------------------------------------------------
void LiberaSinglePassE::read_RightT(Tango::Attribute &attr)
{
	DEBUG_STREAM << "LiberaSinglePassE::read_RightT(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_RightT) ENABLED START -----*/

	//	Set the attribute value
	attr.set_value(attr_RightT_read, 10000);

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_RightT
}
//--------------------------------------------------------
/**
 *	Read Zposition attribute
 *	Description: Beam Z position (vertical)
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Spectrum  max = 10000
 */
//--------------------------------------------------------
void LiberaSinglePassE::read_Zposition(Tango::Attribute &attr)
{
	DEBUG_STREAM << "LiberaSinglePassE::read_Zposition(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Zposition) ENABLED START -----*/

	//	Set the attribute value
	attr.set_value(attr_Zposition_read, 10000);

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Zposition
}
//--------------------------------------------------------
/**
 *	Read Xposition attribute
 *	Description: Beam X position (horizontal)
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Spectrum  max = 10000
 */
//--------------------------------------------------------
void LiberaSinglePassE::read_Xposition(Tango::Attribute &attr)
{
	DEBUG_STREAM << "LiberaSinglePassE::read_Xposition(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Xposition) ENABLED START -----*/

	//	Set the attribute value
	attr.set_value(attr_Xposition_read, 10000);

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Xposition
}
//--------------------------------------------------------
/**
 *	Read Current attribute
 *	Description: Beam current computed from strip lines data
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Spectrum  max = 100
 */
//--------------------------------------------------------
void LiberaSinglePassE::read_Current(Tango::Attribute &attr)
{
	DEBUG_STREAM << "LiberaSinglePassE::read_Current(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Current) ENABLED START -----*/

	//	Set the attribute value
	attr.set_value(attr_Current_read, 100);

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Current
}
//--------------------------------------------------------
/**
 *	Read SumT attribute
 *	Description: Sum of the 4 computed ADC outputs (the xxxT attributes)
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Spectrum  max = 10000
 */
//--------------------------------------------------------
void LiberaSinglePassE::read_SumT(Tango::Attribute &attr)
{
	DEBUG_STREAM << "LiberaSinglePassE::read_SumT(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_SumT) ENABLED START -----*/

	//	Set the attribute value
	attr.set_value(attr_SumT_read, 10000);

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_SumT
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::LiberaSinglePassEClass::add_dynamic_attributes()
 *	Description : Create the dynamic attributes if any
 *	              for specified device.
 */
//--------------------------------------------------------
void LiberaSinglePassE::add_dynamic_attributes()
{
	/*----- PROTECTED REGION ID(LiberaSinglePassE::Class::add_dynamic_attributes) ENABLED START -----*/

	//	Add your own code to create and add dynamic attributes if any

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::Class::add_dynamic_attributes

}



//========================================================
//	Command execution methods
//========================================================

//--------------------------------------------------------
/**
 *	Execute the Reset command:
 *	Description: Reset the device in case of fault
 *
 *	@param argin
 *	@returns
 */
//--------------------------------------------------------
void LiberaSinglePassE::reset()
{
	DEBUG_STREAM << "LiberaSinglePassE::Reset()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(LiberaSinglePassE::reset) ENABLED START -----*/

	//	Add your own code

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::reset

}

//--------------------------------------------------------
/**
 *	Execute the ResetTrigger command:
 *	Description: Reset the trigger counter
 *
 *	@param argin
 *	@returns
 */
//--------------------------------------------------------
void LiberaSinglePassE::reset_trigger()
{
	DEBUG_STREAM << "LiberaSinglePassE::ResetTrigger()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(LiberaSinglePassE::reset_trigger) ENABLED START -----*/

	//	Add your own code

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::reset_trigger

}


	/*----- PROTECTED REGION ID(LiberaSinglePassE::namespace_ending) ENABLED START -----*/

	//	Additional Methods

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::namespace_ending
} //	namespace