/*----- PROTECTED REGION ID(LiberaSinglePassEStateMachine.cpp) ENABLED START -----*/
static const char *RcsId = "$Id:  $";
//=============================================================================
//
// file :        LiberaSinglePassEStateMachine.cpp
//
// description : C++ source for the �name� and its alowed
//               methods for commands and attributes
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


/*
 * LiberaSinglePassE states description:
 *
 * ON :	The Libera box is up and running
 * UNKNOWN :	No possible communication with the Libera box
 * FAULT :	The Libera box is in Fault
 */

namespace LiberaSinglePassE_ns
{

//=================================================
//		Attributes Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_BufferSizeState_allowed()
 *	Description : Execution allowed for BufferSize attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_BufferSize_allowed(Tango::AttReqType type)
{
	//	Check if access type.
	if ( type!=Tango::READ_REQ )
	{
			//	Not any excluded states for BufferSize attribute in WRITE access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::BufferSizeStateAllowed_WRITE) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::BufferSizeStateAllowed_WRITE

		return true;
	}
	else
	if (	//	Compare device state with not allowed states for READ
		get_state() == Tango::UNKNOWN)
	{

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_BufferSizeStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_BufferSizeStateAllowed_READ

		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_AttenuationLevelState_allowed()
 *	Description : Execution allowed for AttenuationLevel attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_AttenuationLevel_allowed(Tango::AttReqType type)
{
	//	Check if access type.
	if ( type!=Tango::READ_REQ )
	{
			//	Not any excluded states for AttenuationLevel attribute in WRITE access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::AttenuationLevelStateAllowed_WRITE) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::AttenuationLevelStateAllowed_WRITE

		return true;
	}
	else
		//	Not any excluded states for AttenuationLevel attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_AttenuationLevelStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_AttenuationLevelStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_TriggerCounterState_allowed()
 *	Description : Execution allowed for TriggerCounter attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_TriggerCounter_allowed(Tango::AttReqType type)
{
	if (	//	Compare device state with not allowed states for READ
		get_state() == Tango::UNKNOWN)
	{

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_TriggerCounterStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_TriggerCounterStateAllowed_READ

		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Fan1SpeedState_allowed()
 *	Description : Execution allowed for Fan1Speed attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Fan1Speed_allowed(Tango::AttReqType type)
{
		//	Not any excluded states for Fan1Speed attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Fan1SpeedStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Fan1SpeedStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Fan2SpeedState_allowed()
 *	Description : Execution allowed for Fan2Speed attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Fan2Speed_allowed(Tango::AttReqType type)
{
	if (	//	Compare device state with not allowed states for READ
		get_state() == Tango::UNKNOWN)
	{

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Fan2SpeedStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Fan2SpeedStateAllowed_READ

		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Temp1State_allowed()
 *	Description : Execution allowed for Temp1 attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Temp1_allowed(Tango::AttReqType type)
{
	if (	//	Compare device state with not allowed states for READ
		get_state() == Tango::UNKNOWN)
	{

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Temp1StateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Temp1StateAllowed_READ

		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Temp2State_allowed()
 *	Description : Execution allowed for Temp2 attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Temp2_allowed(Tango::AttReqType type)
{
	if (	//	Compare device state with not allowed states for READ
		get_state() == Tango::UNKNOWN)
	{

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Temp2StateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Temp2StateAllowed_READ

		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Temp3State_allowed()
 *	Description : Execution allowed for Temp3 attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Temp3_allowed(Tango::AttReqType type)
{
	if (	//	Compare device state with not allowed states for READ
		get_state() == Tango::UNKNOWN)
	{

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Temp3StateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Temp3StateAllowed_READ

		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Calibration_kaState_allowed()
 *	Description : Execution allowed for Calibration_ka attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Calibration_ka_allowed(Tango::AttReqType type)
{
	//	Check if access type.
	if ( type!=Tango::READ_REQ )
	{
			//	Not any excluded states for Calibration_ka attribute in WRITE access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::Calibration_kaStateAllowed_WRITE) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::Calibration_kaStateAllowed_WRITE

		return true;
	}
	else
		//	Not any excluded states for Calibration_ka attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Calibration_kaStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Calibration_kaStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Calibration_kbState_allowed()
 *	Description : Execution allowed for Calibration_kb attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Calibration_kb_allowed(Tango::AttReqType type)
{
	//	Check if access type.
	if ( type!=Tango::READ_REQ )
	{
			//	Not any excluded states for Calibration_kb attribute in WRITE access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::Calibration_kbStateAllowed_WRITE) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::Calibration_kbStateAllowed_WRITE

		return true;
	}
	else
		//	Not any excluded states for Calibration_kb attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Calibration_kbStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Calibration_kbStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Calibration_kcState_allowed()
 *	Description : Execution allowed for Calibration_kc attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Calibration_kc_allowed(Tango::AttReqType type)
{
	//	Check if access type.
	if ( type!=Tango::READ_REQ )
	{
			//	Not any excluded states for Calibration_kc attribute in WRITE access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::Calibration_kcStateAllowed_WRITE) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::Calibration_kcStateAllowed_WRITE

		return true;
	}
	else
		//	Not any excluded states for Calibration_kc attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Calibration_kcStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Calibration_kcStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Calibration_kdState_allowed()
 *	Description : Execution allowed for Calibration_kd attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Calibration_kd_allowed(Tango::AttReqType type)
{
	//	Check if access type.
	if ( type!=Tango::READ_REQ )
	{
			//	Not any excluded states for Calibration_kd attribute in WRITE access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::Calibration_kdStateAllowed_WRITE) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::Calibration_kdStateAllowed_WRITE

		return true;
	}
	else
		//	Not any excluded states for Calibration_kd attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Calibration_kdStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Calibration_kdStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Linear_x_kState_allowed()
 *	Description : Execution allowed for Linear_x_k attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Linear_x_k_allowed(Tango::AttReqType type)
{
	//	Check if access type.
	if ( type!=Tango::READ_REQ )
	{
			//	Not any excluded states for Linear_x_k attribute in WRITE access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::Linear_x_kStateAllowed_WRITE) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::Linear_x_kStateAllowed_WRITE

		return true;
	}
	else
		//	Not any excluded states for Linear_x_k attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Linear_x_kStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Linear_x_kStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Linear_x_offsState_allowed()
 *	Description : Execution allowed for Linear_x_offs attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Linear_x_offs_allowed(Tango::AttReqType type)
{
	//	Check if access type.
	if ( type!=Tango::READ_REQ )
	{
			//	Not any excluded states for Linear_x_offs attribute in WRITE access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::Linear_x_offsStateAllowed_WRITE) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::Linear_x_offsStateAllowed_WRITE

		return true;
	}
	else
		//	Not any excluded states for Linear_x_offs attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Linear_x_offsStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Linear_x_offsStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Linear_y_kState_allowed()
 *	Description : Execution allowed for Linear_y_k attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Linear_y_k_allowed(Tango::AttReqType type)
{
	//	Check if access type.
	if ( type!=Tango::READ_REQ )
	{
			//	Not any excluded states for Linear_y_k attribute in WRITE access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::Linear_y_kStateAllowed_WRITE) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::Linear_y_kStateAllowed_WRITE

		return true;
	}
	else
		//	Not any excluded states for Linear_y_k attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Linear_y_kStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Linear_y_kStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Linear_y_offsState_allowed()
 *	Description : Execution allowed for Linear_y_offs attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Linear_y_offs_allowed(Tango::AttReqType type)
{
	//	Check if access type.
	if ( type!=Tango::READ_REQ )
	{
			//	Not any excluded states for Linear_y_offs attribute in WRITE access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::Linear_y_offsStateAllowed_WRITE) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::Linear_y_offsStateAllowed_WRITE

		return true;
	}
	else
		//	Not any excluded states for Linear_y_offs attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Linear_y_offsStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Linear_y_offsStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Linear_q_kState_allowed()
 *	Description : Execution allowed for Linear_q_k attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Linear_q_k_allowed(Tango::AttReqType type)
{
	//	Check if access type.
	if ( type!=Tango::READ_REQ )
	{
			//	Not any excluded states for Linear_q_k attribute in WRITE access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::Linear_q_kStateAllowed_WRITE) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::Linear_q_kStateAllowed_WRITE

		return true;
	}
	else
		//	Not any excluded states for Linear_q_k attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Linear_q_kStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Linear_q_kStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Linear_q_offsState_allowed()
 *	Description : Execution allowed for Linear_q_offs attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Linear_q_offs_allowed(Tango::AttReqType type)
{
	//	Check if access type.
	if ( type!=Tango::READ_REQ )
	{
			//	Not any excluded states for Linear_q_offs attribute in WRITE access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::Linear_q_offsStateAllowed_WRITE) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::Linear_q_offsStateAllowed_WRITE

		return true;
	}
	else
		//	Not any excluded states for Linear_q_offs attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Linear_q_offsStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Linear_q_offsStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Linear_sum_kState_allowed()
 *	Description : Execution allowed for Linear_sum_k attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Linear_sum_k_allowed(Tango::AttReqType type)
{
	//	Check if access type.
	if ( type!=Tango::READ_REQ )
	{
			//	Not any excluded states for Linear_sum_k attribute in WRITE access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::Linear_sum_kStateAllowed_WRITE) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::Linear_sum_kStateAllowed_WRITE

		return true;
	}
	else
		//	Not any excluded states for Linear_sum_k attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Linear_sum_kStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Linear_sum_kStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Linear_sum_offsState_allowed()
 *	Description : Execution allowed for Linear_sum_offs attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Linear_sum_offs_allowed(Tango::AttReqType type)
{
	//	Check if access type.
	if ( type!=Tango::READ_REQ )
	{
			//	Not any excluded states for Linear_sum_offs attribute in WRITE access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::Linear_sum_offsStateAllowed_WRITE) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::Linear_sum_offsStateAllowed_WRITE

		return true;
	}
	else
		//	Not any excluded states for Linear_sum_offs attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Linear_sum_offsStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Linear_sum_offsStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Signal_expansionState_allowed()
 *	Description : Execution allowed for Signal_expansion attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Signal_expansion_allowed(Tango::AttReqType type)
{
	//	Check if access type.
	if ( type!=Tango::READ_REQ )
	{
			//	Not any excluded states for Signal_expansion attribute in WRITE access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::Signal_expansionStateAllowed_WRITE) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::Signal_expansionStateAllowed_WRITE

		return true;
	}
	else
		//	Not any excluded states for Signal_expansion attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Signal_expansionStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Signal_expansionStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Interlock_enabledState_allowed()
 *	Description : Execution allowed for Interlock_enabled attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Interlock_enabled_allowed(Tango::AttReqType type)
{
	//	Check if access type.
	if ( type!=Tango::READ_REQ )
	{
			//	Not any excluded states for Interlock_enabled attribute in WRITE access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::Interlock_enabledStateAllowed_WRITE) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::Interlock_enabledStateAllowed_WRITE

		return true;
	}
	else
		//	Not any excluded states for Interlock_enabled attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Interlock_enabledStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Interlock_enabledStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Limit_min_xState_allowed()
 *	Description : Execution allowed for Limit_min_x attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Limit_min_x_allowed(Tango::AttReqType type)
{
	//	Check if access type.
	if ( type!=Tango::READ_REQ )
	{
			//	Not any excluded states for Limit_min_x attribute in WRITE access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::Limit_min_xStateAllowed_WRITE) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::Limit_min_xStateAllowed_WRITE

		return true;
	}
	else
		//	Not any excluded states for Limit_min_x attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Limit_min_xStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Limit_min_xStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Limit_min_yState_allowed()
 *	Description : Execution allowed for Limit_min_y attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Limit_min_y_allowed(Tango::AttReqType type)
{
	//	Check if access type.
	if ( type!=Tango::READ_REQ )
	{
			//	Not any excluded states for Limit_min_y attribute in WRITE access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::Limit_min_yStateAllowed_WRITE) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::Limit_min_yStateAllowed_WRITE

		return true;
	}
	else
		//	Not any excluded states for Limit_min_y attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Limit_min_yStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Limit_min_yStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Limit_max_xState_allowed()
 *	Description : Execution allowed for Limit_max_x attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Limit_max_x_allowed(Tango::AttReqType type)
{
	//	Check if access type.
	if ( type!=Tango::READ_REQ )
	{
			//	Not any excluded states for Limit_max_x attribute in WRITE access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::Limit_max_xStateAllowed_WRITE) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::Limit_max_xStateAllowed_WRITE

		return true;
	}
	else
		//	Not any excluded states for Limit_max_x attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Limit_max_xStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Limit_max_xStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Limit_max_yState_allowed()
 *	Description : Execution allowed for Limit_max_y attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Limit_max_y_allowed(Tango::AttReqType type)
{
	//	Check if access type.
	if ( type!=Tango::READ_REQ )
	{
			//	Not any excluded states for Limit_max_y attribute in WRITE access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::Limit_max_yStateAllowed_WRITE) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::Limit_max_yStateAllowed_WRITE

		return true;
	}
	else
		//	Not any excluded states for Limit_max_y attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Limit_max_yStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Limit_max_yStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Overflow_thresholdState_allowed()
 *	Description : Execution allowed for Overflow_threshold attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Overflow_threshold_allowed(Tango::AttReqType type)
{
	//	Check if access type.
	if ( type!=Tango::READ_REQ )
	{
			//	Not any excluded states for Overflow_threshold attribute in WRITE access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::Overflow_thresholdStateAllowed_WRITE) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::Overflow_thresholdStateAllowed_WRITE

		return true;
	}
	else
		//	Not any excluded states for Overflow_threshold attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Overflow_thresholdStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Overflow_thresholdStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Interlock_statusState_allowed()
 *	Description : Execution allowed for Interlock_status attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Interlock_status_allowed(Tango::AttReqType type)
{
		//	Not any excluded states for Interlock_status attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Interlock_statusStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Interlock_statusStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Status_xState_allowed()
 *	Description : Execution allowed for Status_x attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Status_x_allowed(Tango::AttReqType type)
{
		//	Not any excluded states for Status_x attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Status_xStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Status_xStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Status_yState_allowed()
 *	Description : Execution allowed for Status_y attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Status_y_allowed(Tango::AttReqType type)
{
		//	Not any excluded states for Status_y attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Status_yStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Status_yStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_Status_adc_overflowState_allowed()
 *	Description : Execution allowed for Status_adc_overflow attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Status_adc_overflow_allowed(Tango::AttReqType type)
{
		//	Not any excluded states for Status_adc_overflow attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_Status_adc_overflowStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_Status_adc_overflowStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_AState_allowed()
 *	Description : Execution allowed for A attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_A_allowed(Tango::AttReqType type)
{
		//	Not any excluded states for A attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_AStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_AStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_BState_allowed()
 *	Description : Execution allowed for B attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_B_allowed(Tango::AttReqType type)
{
		//	Not any excluded states for B attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_BStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_BStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_CState_allowed()
 *	Description : Execution allowed for C attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_C_allowed(Tango::AttReqType type)
{
		//	Not any excluded states for C attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_CStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_CStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_DState_allowed()
 *	Description : Execution allowed for D attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_D_allowed(Tango::AttReqType type)
{
		//	Not any excluded states for D attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_DStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_DStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_ATState_allowed()
 *	Description : Execution allowed for AT attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_AT_allowed(Tango::AttReqType type)
{
		//	Not any excluded states for AT attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_ATStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_ATStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_BTState_allowed()
 *	Description : Execution allowed for BT attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_BT_allowed(Tango::AttReqType type)
{
		//	Not any excluded states for BT attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_BTStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_BTStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_CTState_allowed()
 *	Description : Execution allowed for CT attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_CT_allowed(Tango::AttReqType type)
{
		//	Not any excluded states for CT attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_CTStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_CTStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_DTState_allowed()
 *	Description : Execution allowed for DT attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_DT_allowed(Tango::AttReqType type)
{
		//	Not any excluded states for DT attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_DTStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_DTStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_YpositionState_allowed()
 *	Description : Execution allowed for Yposition attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Yposition_allowed(Tango::AttReqType type)
{
		//	Not any excluded states for Yposition attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_YpositionStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_YpositionStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_XpositionState_allowed()
 *	Description : Execution allowed for Xposition attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Xposition_allowed(Tango::AttReqType type)
{
		//	Not any excluded states for Xposition attribute in READ access.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_XpositionStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_XpositionStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_CurrentState_allowed()
 *	Description : Execution allowed for Current attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Current_allowed(Tango::AttReqType type)
{
	if (	//	Compare device state with not allowed states for READ
		get_state() == Tango::UNKNOWN)
	{

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_CurrentStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_CurrentStateAllowed_READ

		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_SumTState_allowed()
 *	Description : Execution allowed for SumT attribute.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_SumT_allowed(Tango::AttReqType type)
{
	if (	//	Compare device state with not allowed states for READ
		get_state() == Tango::UNKNOWN)
	{

	/*----- PROTECTED REGION ID(LiberaSinglePassE::read_SumTStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::read_SumTStateAllowed_READ

		return false;
	}
	return true;
}


	/*----- PROTECTED REGION ID(LiberaSinglePassE::are_dynamic_attributes_allowed) ENABLED START -----*/

	//	Add your code to check if dynamic attributes are alowed

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::are_dynamic_attributes_allowed


//=================================================
//		Commands Allowed Methods
//=================================================


//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_ResetState_allowed()
 *	Description : Execution allowed for Reset command.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_Reset_allowed(const CORBA::Any &any)
{
	if (	//	Compare device state with not allowed states for command
		get_state() == Tango::ON	||
		get_state() == Tango::UNKNOWN)
	{

	/*----- PROTECTED REGION ID(LiberaSinglePassE::ResetStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::ResetStateAllowed

		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_ResetTriggerState_allowed()
 *	Description : Execution allowed for ResetTrigger command.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_ResetTrigger_allowed(const CORBA::Any &any)
{
	if (	//	Compare device state with not allowed states for command
		get_state() == Tango::UNKNOWN	||
		get_state() == Tango::FAULT)
	{

	/*----- PROTECTED REGION ID(LiberaSinglePassE::ResetTriggerStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::ResetTriggerStateAllowed

		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_ResetInterlockStatusState_allowed()
 *	Description : Execution allowed for ResetInterlockStatus command.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_ResetInterlockStatus_allowed(const CORBA::Any &any)
{
	//	Not any excluded states for ResetInterlockStatus command.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::ResetInterlockStatusStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::ResetInterlockStatusStateAllowed

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : LiberaSinglePassE::is_MagicCommandState_allowed()
 *	Description : Execution allowed for MagicCommand command.
 */
//--------------------------------------------------------

bool LiberaSinglePassE::is_MagicCommand_allowed(const CORBA::Any &any)
{
	//	Not any excluded states for MagicCommand command.

	/*----- PROTECTED REGION ID(LiberaSinglePassE::MagicCommandStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::MagicCommandStateAllowed

	return true;
}


	/*----- PROTECTED REGION ID(LiberaSinglePassE::are_dynamic_commands_allowed) ENABLED START -----*/

	//	Add your code to check if dynamic commands are alowed

	/*----- PROTECTED REGION END -----*/	//	LiberaSinglePassE::are_dynamic_commands_allowed

}	// namespace LiberaSinglePassE_ns
