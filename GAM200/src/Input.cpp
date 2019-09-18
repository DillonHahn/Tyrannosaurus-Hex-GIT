/******************************************************************************/
/*!
\file   Input.cpp
\author Dillon Hahn
\par    email: dillon.h@digipen.edu
\par	GAM200 Project
\date   9/12/19
\brief
  Module for handling Input functionality
*/
/******************************************************************************/

#include "Input.h"
#include "Message.h"
#include <GLFW/glfw3.h>

Input::Input(GLFWwindow* window)
{
	window_ = window;
	glfwSetKeyCallback(window, key_input);
}

//void Input::Get_Keyboard_Input(int key, int scancode, int action, int mods)
//{
//	key_input(window_, key, scancode, action, mods);
//}

void Input::key_input(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
		glfwSetWindowShouldClose(window, GLFW_TRUE);
}

void Input::HandleMessage(const Message& msg)
{
	switch (msg.type_)
	{
	case MSG_TICK:
	{
		//Get_Keyboard_Input(GLFW_KEY_ESCAPE, 0, GLFW_PRESS, 0);
		break;
	}
	default:
	{
		break;
	}
	}
}


