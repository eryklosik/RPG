#include "pch.h"
#include "Coffee.h"


Coffee::Coffee(string name, int stamina, int hp, int strength)
{
	this -> name = name;
	this -> stamina = stamina;
	this -> hp = hp;
	this -> strength = strength;
}

Coffee::~Coffee()
{
}

string Coffee::getName()
{
	return name;
}

int Coffee::getStamina()
{
	return stamina;
}

int Coffee::getHp()
{
	return hp;
}

int Coffee::getStrength()
{
	return strength;
}