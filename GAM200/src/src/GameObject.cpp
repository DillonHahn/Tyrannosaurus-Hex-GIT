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

  componentArray_.push_back(trans);
  componentArray_.push_back(phys);
  componentArray_.push_back(bounds);
}

void GameObject::Serialize()
{
  std::string serString = Create_Serialize_String();

  std::fstream file;
  file.open("gameObjects\\" + name_ + ".txt", std::fstream::out);
  file << serString;
  file.close();
}

void GameObject::Deserialize()
{
  std::string serString = "";
  std::fstream file;
  file.open("gameObjects\\" + name_ + ".txt");
  while (!file.eof())
  {
    std::string curWord;
    file >> curWord;
    serString += curWord;
    serString += "\n";
  }
  file.close();

  Parse_Serialize_String(serString);

  /*std::fstream outFile;
  outFile.open("gameObjects\\" + name_ + "DE.txt", std::fstream::out);
  outFile << serString;
  outFile.close();*/
}

std::string GameObject::Create_Serialize_String()
{
  std::string serString = name_;
  for (int i = 0; i < componentArray_.size(); ++i)
  {
    serString += "\n";
    componentArray_[i]->Serialize(serString);
  }

  return serString;
}

void GameObject::Parse_Serialize_String(std::string inputString)
{
  std::string curString = "";
  for(int i = 0; i < inputString.size(); ++i)
  {
    if (inputString[i] != '\n')
    {
      curString += inputString[i];
    }
    else
    {
      if(curString)
    }
  }
}