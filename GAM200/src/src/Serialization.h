/******************************************************************************/
/*!
\file   Serialition.h
\author Dillon Hahn
\par    email: dillon.h@digipen.edu
\par	GAM200 Project
\date   9/17/19
\brief
  Module for handling serialization and deserialization
*/
/******************************************************************************/

/////////////////////////////////////////////////////////////////////////////////////////////////
//// THIS FILE IS IN A VERY INCOMPLETE STATE, DO NOT ATTEMPT TO USE ITS FUNCTIONS OR CLASSES ////
/////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "System.h"
#include "Component.h"
#include "UnitTest.h"
#include "Message.h"
#include <fstream>

struct Message;

/******************************************************************************/
/*!
  \class Debug
  \brief
    System that manages Serialization and Deserialization
*/
/******************************************************************************/
class Serialization : public System
{
public:
	// targetFolder is where json files will be searched for and created
	Serialization(FILE* targetFolder);

	//void Tick(float dt);

  void Handle_Message(const Message& msg);

  

private:
  FILE* targetFolder_;

	//void Run_Unit_Test(UT::UType uniType);

	
};

/******************************************************************************/
/*!
  \class DebugMessage
  \brief
	Message with a formatted std::string payload, for debugging purposes.
	Template variadic code added from https://stackoverflow.com/a/26221725
	under CC0 1.0
*/
/******************************************************************************/
struct SerializationMessage : public Message
{
	template<typename ... Args>
	SerializationMessage(const std::string& format, Args ... args) : Message(MSG_SERIALIZATION, nullptr)
	{
		/*size_t size = snprintf(nullptr, 0, format.c_str(), args ...) + 1;
		std::unique_ptr<char[]> buf(new char[size]);
		snprintf(buf.get(), size, format.c_str(), args ...);
		mStr_ = std::string(buf.get(), buf.get() + size - 1);
		severity_ = severity;*/
	}

	std::string mStr_;

private:
	//DebugMessage() = delete;
};

/******************************************************************************/
/*!
  \class UnitTestMessage
  \brief
	Simple message to trigger a unit test.
*/
/******************************************************************************/
//struct UnitTestMessage : public Message
//{
//	UnitTestMessage(UT::UType testUnit) : Message(MSG_UTEST, nullptr), unit_(testUnit) {}
//
//	UT::UType unit_;
//private:
//	UnitTestMessage() = delete;
//};
