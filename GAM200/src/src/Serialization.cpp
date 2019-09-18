/******************************************************************************/
/*!
\file   Serialization.cpp
\author Dillon Hahn
\par    email: dillon.h@digipen.edu
\par	GAM200 Project
\date   9/09/19
\brief
  Module for handling serialization and deserialization
*/
/******************************************************************************/

/////////////////////////////////////////////////////////////////////////////////////////////////
//// THIS FILE IS IN A VERY INCOMPLETE STATE, DO NOT ATTEMPT TO USE ITS FUNCTIONS OR CLASSES ////
/////////////////////////////////////////////////////////////////////////////////////////////////

#include "Serialization.h"
#include "UnitTest.h"
#include "Message.h"
#include <fstream>


/******************************************************************************/
/*!
  \brief
    Constructor opens a log file upon creation

  \param filepath
    String name of the log file to write to

*/
/******************************************************************************/
Serialization::Serialization(FILE * targetFolder)
{
  targetFolder_ = targetFolder;
}

/******************************************************************************/
/*!
  \brief
    Message handler for Debug Module

  \param msg
    Message being broadcast

*/
/******************************************************************************/
void Serialization::Handle_Message(const Message& msg)
{
    switch (msg.type_)
    {
    case MSG_SERIALIZATION:
    {
        const SerializationMessage& strMsg = static_cast<const SerializationMessage&>(msg); // cast to correct type
		//if (strMsg.severity_ <= logSeverity_)
		//{
		//	log_ << strMsg.mStr_ << '\n';  // log and print
		//}

		//if (strMsg.severity_ <= consoleSeverity_)
		//{
		//	std::cout << strMsg.mStr_ << std::endl;
		//}
  //      break;
    }
	case MSG_UTEST:
	{
		
	}
    default:
    {
        
    }
    }
}

/******************************************************************************/
/*!
  \brief
	Runs a specific unit test.

  \param uType
	Specific unit to test.

*/
/******************************************************************************/
//void Debug::Run_Unit_Test(UT::UType uType)
//{
//	UT::Test_Unit(uType);
//}

/******************************************************************************/
/*!
  \brief
	Runs on tick.

  \param dt

*/
/******************************************************************************/
//void Debug::Tick(float dt)
//{
//	(dt);
//}
