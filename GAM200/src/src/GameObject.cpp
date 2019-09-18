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
#include <string>

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