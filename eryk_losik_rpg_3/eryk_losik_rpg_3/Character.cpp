#include "pch.h"
#include "Character.h"

Character::Character(string name, int hp, int strength, int stamina, int defence)
{
	this -> name = name;
	this -> hp = hp;
	this -> strength = strength;
	this -> stamina = stamina;
	this -> defence = defence;
}
Character::Character()
{
}
Character::~Character()
{
}

string Character::getName() {
	return name;
}

int Character::getHp() {
	return hp;
}

int Character::getStrength() {
	return strength;
}

int Character::getStamina() {
	return stamina;
}

int Character::getDefence() {
	return defence;
}
