/*----- PROTECTED REGION ID(LiberaSinglePassE.h) ENABLED START -----*/
//=============================================================================
//
// file :        LiberaSinglePassE.h
//
// description : Include for the LiberaSinglePassE class.
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


#ifndef LIBERASINGLEPASSE_H
#define LIBERASINGLEPASSE_H

#include <math.h>
#include <tango.h>
#include "LiberaCommon.h"

#include <string.h>

#include <map>
#include <utility>


#define			ON_STATUS				"Libera box is up and running"
#define			MAX_BUF_SIZE			10000
#define			MIN_POINTS				5
#define			POINTS_AVERAGING		4
#define			POINTS_PER_US			108
#define			MAX_CURRENT_BUF_SIZE	80

#define CHECK_ALLOC(ptr) \
if (ptr == NULL) \
{ \
   	Tango::Except::throw_exception ("LiberaSinglePassE_BadAlloc", \
                                    "Error while allocating memory", \
                                    "LiberaSinglePassE::init_device"); \
}

/*----- PROTECTED REGION END -----*/


/**
 *	LiberaSinglePassE class Description:
 *	This Tango class is the interface of the Instrumentation Technologies (IT) Libera
 *	Brilliance Single Pass E equipment. This class supports only a subset of all the
 *	equipment features. It is the basic equipment for a Injection and Transfer Efficiency
 *	Measurement System
 */

namespace LiberaSinglePassE_ns
{
	/*----- PROTECTED REGION ID(LiberaSinglePassE::Additional Class Declarations) ENABLED START -----*/

#define FATAL_STREAM_DS \
  if (get_logger()->is_fatal_enabled()) \
    get_logger()->fatal_stream() \
      << log4tango::LogInitiator::_begin_log \
      << __FILE__ << " " << __func__ << "[" << __LINE__ << "] " \
      << "TDS " << device_name << " "

#define ERROR_STREAM_DS \
  if (get_logger()->is_error_enabled()) \
    get_logger()->error_stream() \
      << log4tango::LogInitiator::_begin_log \
      << __FILE__ << " " << __func__ << "[" << __LINE__ << "] " \
      << "TDS " << device_name << " "

#define WARN_STREAM_DS \
  if (get_logger()->is_warn_enabled()) \
    get_logger()->warn_stream() \
      << log4tango::LogInitiator::_begin_log \
      << __FILE__ << " " << __func__ << "[" << __LINE__ << "] " \
      << "TDS " << device_name << " "

#define INFO_STREAM_DS \
  if (get_logger()->is_info_enabled()) \
    get_logger()->info_stream() \
      << log4tango::LogInitiator::_begin_log \
      << __FILE__ << " " << __func__ << "[" << __LINE__ << "] " \
      << "TDS " << device_name << " "

#define DEBUG_STREAM_DS \
  if (get_logger()->is_debug_enabled()) \
  	get_logger()->debug_stream() \
      << log4tango::LogInitiator::_begin_log \
      << __FILE__ << " " << __func__ << "[" << __LINE__ << "] " \
      << "TDS " << device_name << " "

#define ENDLOG_DS \
  log4tango::LogSeparator::_end_log

//		Additional Class Declarations
class LiberaSinglePassEDataTask;

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::Additional Class Declarations


class LiberaSinglePassE : public Tango::Device_4Impl
{


	/*----- PROTECTED REGION ID(LiberaSinglePassE::Data Members) ENABLED START -----*/

	//		Add your own data members

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::Data Members


//	Device property data members
public:		//	LiberaIpAddr:	Libera IP address
	string	liberaIpAddr;
	//	LiberaBoard:	The board name (and index) used by the Libera box for multi board setup
	string	liberaBoard;
	//	Location:	The libera box physical place (TL1, BOOSTER,....)
	string	location;
	//	ServiceTaskSleep:	Sleep time (in mS) for the class task between libera boxes request
	Tango::DevLong	serviceTaskSleep;
	//	DataTaskHeartbeat:	Heartbeat time (in mS) for the data task
	Tango::DevLong	dataTaskHeartbeat;
	//	BeamThreshold:	Threshold to decide if there is some beam at a given time
	//	(at a given index in the ADC buffers)
	Tango::DevDouble	beamThreshold;
	//	PositionK:	Multiplicative coefficient to compute beam position
	Tango::DevDouble	positionK;
	//	CurrentK:	Multiplicative coefficient to compute beam current
	Tango::DevDouble	currentK;
	//	CurrentTimeOffset:	Time coefficient used in current computation
	Tango::DevLong	currentTimeOffset;

//	Attribute data members
public:
	Tango::DevLong		*attr_BufferSize_read;
	Tango::DevLong		*attr_AttenuationLevel_read;
	Tango::DevULong		*attr_TriggerCounter_read;
	Tango::DevUShort	*attr_Fan1Speed_read;
	Tango::DevUShort	*attr_Fan2Speed_read;
	Tango::DevUShort	*attr_Temp1_read;
	Tango::DevUShort	*attr_Temp2_read;
	Tango::DevUShort	*attr_Temp3_read;
	Tango::DevShort		*attr_Up_read;
	Tango::DevShort		*attr_Down_read;
	Tango::DevShort		*attr_Left_read;
	Tango::DevShort		*attr_Right_read;
	Tango::DevDouble	*attr_UpT_read;
	Tango::DevDouble	*attr_DownT_read;
	Tango::DevDouble	*attr_LeftT_read;
	Tango::DevDouble	*attr_RightT_read;
	Tango::DevDouble	*attr_Zposition_read;
	Tango::DevDouble	*attr_Xposition_read;
	Tango::DevDouble	*attr_Current_read;
	Tango::DevDouble	*attr_SumT_read;



//	Constructors and destructors
public:
	/**
	 * Constructs a newly allocated Command object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	LiberaSinglePassE(Tango::DeviceClass *cl,string &s);
	/**
	 * Constructs a newly allocated Command object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	LiberaSinglePassE(Tango::DeviceClass *cl,const char *s);
	/**
	 * Constructs a newly allocated Command object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device name
	 *	@param d	Device description.
	 */
	LiberaSinglePassE(Tango::DeviceClass *cl,const char *s,const char *d);
	/**
	 * The object destructor.
	 */
	~LiberaSinglePassE() {delete_device();};



//	Miscellaneous methods
public:
	/**
	 *	will be called at device destruction or at init command.
	 */
	void delete_device();
	/**
	 *	Initialize the device
	 */
	virtual void init_device();
	/**
	 *	Read the device properties from database
	 */
	 void get_device_property();
	/**
	 *	Always executed method before execution command method.
	 */
	virtual void always_executed_hook();


//	Attribute methods
public:
	/**
	 *	Method      : LiberaSinglePassE::read_attr_hardware()
	 *	Description : Hardware acquisition for attributes.
	 */
	virtual void read_attr_hardware(vector<long> &attr_list);


	/**
	 *	BufferSize attribute related methods.
	 *	Description: The Libera box ADC buffer size (between 10 and 8192)
	 *
	 *	Data type:	Tango::DevLong
	 *	Attr type:	Scalar
	 */
	virtual void read_BufferSize(Tango::Attribute &attr);
	virtual void write_BufferSize(Tango::WAttribute &attr);
	virtual bool is_BufferSize_allowed(Tango::AttReqType type);



	/**
	 *	AttenuationLevel attribute related methods.
	 *	Description: The analog channels level. This attribute allows the user to tune the analog channels
	 *             attenuator. The input is an index within a lookup table in the Libera box
	 *
	 *	Data type:	Tango::DevLong
	 *	Attr type:	Scalar
	 */
	virtual void read_AttenuationLevel(Tango::Attribute &attr);
	virtual void write_AttenuationLevel(Tango::WAttribute &attr);
	virtual bool is_AttenuationLevel_allowed(Tango::AttReqType type);



	/**
	 *	TriggerCounter attribute related methods.
	 *	Description: Trigger counter. Incremented at each trigger
	 *
	 *	Data type:	Tango::DevULong
	 *	Attr type:	Scalar
	 */
	virtual void read_TriggerCounter(Tango::Attribute &attr);
	virtual bool is_TriggerCounter_allowed(Tango::AttReqType type);



	/**
	 *	Fan1Speed attribute related methods.
	 *	Description: First fan speed
	 *
	 *	Data type:	Tango::DevUShort
	 *	Attr type:	Scalar
	 */
	virtual void read_Fan1Speed(Tango::Attribute &attr);
	virtual bool is_Fan1Speed_allowed(Tango::AttReqType type);



	/**
	 *	Fan2Speed attribute related methods.
	 *	Description: Second fan speed
	 *
	 *	Data type:	Tango::DevUShort
	 *	Attr type:	Scalar
	 */
	virtual void read_Fan2Speed(Tango::Attribute &attr);
	virtual bool is_Fan2Speed_allowed(Tango::AttReqType type);



	/**
	 *	Temp1 attribute related methods.
	 *	Description: The Libera box first temperature
	 *
	 *	Data type:	Tango::DevUShort
	 *	Attr type:	Scalar
	 */
	virtual void read_Temp1(Tango::Attribute &attr);
	virtual bool is_Temp1_allowed(Tango::AttReqType type);



	/**
	 *	Temp2 attribute related methods.
	 *	Description: The Libera box second temperature
	 *
	 *	Data type:	Tango::DevUShort
	 *	Attr type:	Scalar
	 */
	virtual void read_Temp2(Tango::Attribute &attr);
	virtual bool is_Temp2_allowed(Tango::AttReqType type);



	/**
	 *	Temp3 attribute related methods.
	 *	Description: The Libera box third temperature
	 *
	 *	Data type:	Tango::DevUShort
	 *	Attr type:	Scalar
	 */
	virtual void read_Temp3(Tango::Attribute &attr);
	virtual bool is_Temp3_allowed(Tango::AttReqType type);



	/**
	 *	Up attribute related methods.
	 *	Description: The up StripLine ADC buffer
	 *
	 *	Data type:	Tango::DevShort
	 *	Attr type:	Spectrum  max = 10000
	 */
	virtual void read_Up(Tango::Attribute &attr);
	virtual bool is_Up_allowed(Tango::AttReqType type);



	/**
	 *	Down attribute related methods.
	 *	Description: The down StripLine ADC buffer
	 *
	 *	Data type:	Tango::DevShort
	 *	Attr type:	Spectrum  max = 10000
	 */
	virtual void read_Down(Tango::Attribute &attr);
	virtual bool is_Down_allowed(Tango::AttReqType type);



	/**
	 *	Left attribute related methods.
	 *	Description: The left StripLine ADC buffer
	 *
	 *	Data type:	Tango::DevShort
	 *	Attr type:	Spectrum  max = 10000
	 */
	virtual void read_Left(Tango::Attribute &attr);
	virtual bool is_Left_allowed(Tango::AttReqType type);



	/**
	 *	Right attribute related methods.
	 *	Description: The right StripLine ADC buffer
	 *
	 *	Data type:	Tango::DevShort
	 *	Attr type:	Spectrum  max = 10000
	 */
	virtual void read_Right(Tango::Attribute &attr);
	virtual bool is_Right_allowed(Tango::AttReqType type);



	/**
	 *	UpT attribute related methods.
	 *	Description: The up StripLine ADC buffer after some computation:\nsquare - double averaging filter - square root
	 *
	 *	Data type:	Tango::DevDouble
	 *	Attr type:	Spectrum  max = 10000
	 */
	virtual void read_UpT(Tango::Attribute &attr);
	virtual bool is_UpT_allowed(Tango::AttReqType type);



	/**
	 *	DownT attribute related methods.
	 *	Description: The down StripLine ADC buffer after some computation:\nsquare - double averaging filter - square root
	 *
	 *	Data type:	Tango::DevDouble
	 *	Attr type:	Spectrum  max = 10000
	 */
	virtual void read_DownT(Tango::Attribute &attr);
	virtual bool is_DownT_allowed(Tango::AttReqType type);



	/**
	 *	LeftT attribute related methods.
	 *	Description: The left StripLine ADC buffer after some computation:\nsquare - double averaging filter - square root
	 *
	 *	Data type:	Tango::DevDouble
	 *	Attr type:	Spectrum  max = 10000
	 */
	virtual void read_LeftT(Tango::Attribute &attr);
	virtual bool is_LeftT_allowed(Tango::AttReqType type);



	/**
	 *	RightT attribute related methods.
	 *	Description: The right StripLine ADC buffer after some computation:\nsquare - double averaging filter - square root
	 *
	 *	Data type:	Tango::DevDouble
	 *	Attr type:	Spectrum  max = 10000
	 */
	virtual void read_RightT(Tango::Attribute &attr);
	virtual bool is_RightT_allowed(Tango::AttReqType type);



	/**
	 *	Zposition attribute related methods.
	 *	Description: Beam Z position (vertical)
	 *
	 *	Data type:	Tango::DevDouble
	 *	Attr type:	Spectrum  max = 10000
	 */
	virtual void read_Zposition(Tango::Attribute &attr);
	virtual bool is_Zposition_allowed(Tango::AttReqType type);



	/**
	 *	Xposition attribute related methods.
	 *	Description: Beam X position (horizontal)
	 *
	 *	Data type:	Tango::DevDouble
	 *	Attr type:	Spectrum  max = 10000
	 */
	virtual void read_Xposition(Tango::Attribute &attr);
	virtual bool is_Xposition_allowed(Tango::AttReqType type);



	/**
	 *	Current attribute related methods.
	 *	Description: Beam current computed from strip lines data
	 *
	 *	Data type:	Tango::DevDouble
	 *	Attr type:	Spectrum  max = 100
	 */
	virtual void read_Current(Tango::Attribute &attr);
	virtual bool is_Current_allowed(Tango::AttReqType type);



	/**
	 *	SumT attribute related methods.
	 *	Description: Sum of the 4 computed ADC outputs (the xxxT attributes)
	 *
	 *	Data type:	Tango::DevDouble
	 *	Attr type:	Spectrum  max = 10000
	 */
	virtual void read_SumT(Tango::Attribute &attr);
	virtual bool is_SumT_allowed(Tango::AttReqType type);




	/**
	 *	Method      : LiberaSinglePassE::add_dynamic_attributes()
	 *	Description : Add dynamic attributes if any.
	 */
	void add_dynamic_attributes();

//	Command related methods
public:


	/**
	 *	Command Reset related methods.
	 */
	virtual void reset();
	virtual bool is_Reset_allowed(const CORBA::Any &any);

	/**
	 *	Command ResetTrigger related methods.
	 */
	virtual void reset_trigger();
	virtual bool is_ResetTrigger_allowed(const CORBA::Any &any);



	/*----- PROTECTED REGION ID(LiberaSinglePassE::Additional Method prototypes) ENABLED START -----*/

	//	Additional Method prototypes
protected:
	mci::Node mci_application_root;
	mci::Node mci_platform_root;

	/* Application daemon nodes */
	mci::Node mci_LevelNodeGet;
	mci::Node mci_adc_signal;
	mci::Node mci_LevelNodeSet;

	/* Level enumeration node */
	mci::Node mci_level_gt;

	std::map<uint32_t, string> level_enumeration;


	/* Platform daemon nodes */
	mci::Node mci_temp1;
	mci::Node mci_temp2;
	mci::Node mci_temp3;
	mci::Node mci_fan_left_front;
	mci::Node mci_fan_left_rear;
	mci::Node mci_fan_left_middle;
	mci::Node mci_fan_right_front;
	mci::Node mci_fan_right_middle;
	mci::Node mci_fan_right_rear;


	LiberaSinglePassEDataTask *data_thread;

	struct timeval now;

	void compute();
	void compute_T_attr(Tango::DevShort *,Tango::DevDouble *);
	void compute_pos_attr();
	void compute_current_attr();

public:
	time_t heartbeat_sec;
	Tango::DevULong trig_ctr;
	Tango::DevULong old_trig_ctr;
	int computed_buf_size;
	int current_buf_size;

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::Additional Method prototypes

};

	/*----- PROTECTED REGION ID(LiberaSinglePassE::Additional Classes Definitions) ENABLED START -----*/

	//	Additional Classes definitions

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::Additional Classes Definitions

} //	namespace

#endif	//	LIBERASINGLEPASSE_H
