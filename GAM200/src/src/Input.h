/******************************************************************************/
/*!
\file   Input.h
\author Dillon Hahn
\par    email: dillon.h@digipen.edu
\par	GAM200 Project
\date   9/12/19
\brief
  Module for handling basic input
*/
/******************************************************************************/

#pragma once


#include "System.h"
#include "Message.h"
#include <GLFW/glfw3.h>


struct Message;

/******************************************************************************/
/*!
  \class Input
  \brief
    input system class
*/
/******************************************************************************/
class Input : public System
{
public:

    Input(GLFWwindow* window);

	//void Get_Keyboard_Input(int key, int scancode, int action, int mods);

private:

	GLFWwindow* window_;

	static void key_input(GLFWwindow* window, int key, int scancode, int action, int mods);

	void HandleMessage(const Message& msg);
};
