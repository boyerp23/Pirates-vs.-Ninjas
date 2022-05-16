#pragma once
#include "GameStructure.h"
#include <iostream>

using namespace std;

class Character : public GameStructure
{
public: 
	void Talk(std::string speak);
	//Character(int health = 100);
	//Character(int damage = 10);
	//virtual ~Character();
	void Attack()const;
private: 
	
protected:
	
};

