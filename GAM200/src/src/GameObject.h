/******************************************************************************/
/*!
\file   GameObject.h
\author Dillon Hahn
\par    email: dillon.h@digipen.edu
\par	  GAM200 Project
\date   9/17/19
\brief
  GameObject class built to hold components
*/
/******************************************************************************/

/////////////////////////////////////////////////////////////////////////////////////////////////
//// THIS FILE IS IN A VERY INCOMPLETE STATE, DO NOT ATTEMPT TO USE ITS FUNCTIONS OR CLASSES ////
/////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "Component.h"
#include <string>

class GameObject
{
public:

  GameObject(std::string name);
  void GameObjectTestSetup();
  void Serialize();
  void Deserialize();

private:
  std::string name_;
  // TEMPORARY ARBITRARY SIZE //
  Component* componentArray_[3];
  std::string Create_Serialize_String();
  void Parse_Serialize_String(std::string);
};
