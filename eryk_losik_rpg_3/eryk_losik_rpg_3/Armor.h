#pragma once
#include "Item.h"
using namespace std;

class Armor : public Item
{
private:
	string name;
	int defence;
	string description;
public:
	Armor(string name, int defence, string description);
	~Armor();
	string getName();
	int getDefence();
	string getDescription();
};
