/******************************************************************************/
/*!
\file   GameObject.cpp
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

#include "GameObject.h"
#include "Component.h"
#include "Transform.h"
#include "PhysicsBody.h"
#include "Bounds.h"
#include "Serialization.h"
#include <string>
#include <fstream>

GameObject::GameObject(std::string name)
{
  name_ = name;
}

void GameObject::GameObjectTestSetup()
{
  Transform* trans = new Transform(0, 0);
  PhysicsBody* phys = new PhysicsBody();
  Bounds* bounds = new Bounds();

  componentArray_[0] = trans;
  componentArray_[1] = phys;
  componentArray_[2] = bounds;
}

void GameObject::Serialize()
{
  std::string serString = Create_Serialize_String();

  std::fstream file;
  file.open(name_ + ".txt", std::fstream::out);
  file << serString;
  file.close();
}
void GameObject::Deserialize()
{

}

std::string GameObject::Create_Serialize_String()
{
  std::string serString = name_;
  int compSize = sizeof(componentArray_) / sizeof(componentArray_[1]);
  for (int i = 0; i < compSize; ++i)
  {
    serString += "\n";
    componentArray_[i]->Serialize(serString);
  }

  return serString;
}

void GameObject::Parse_Serialize_String(std::string inputString)
{

}