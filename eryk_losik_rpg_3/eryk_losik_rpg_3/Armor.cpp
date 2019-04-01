#include "pch.h"
#include "Armor.h"


Armor::Armor(string name, int defence, string description)
{
	this->name = name;
	this->defence = defence;
	this->description = description;
}


Armor::~Armor()
{
}

string Armor::getName()
{
	return name;
}

int Armor::getDefence()
{
	return defence;
}

string Armor::getDescription()
{
	return description;
}