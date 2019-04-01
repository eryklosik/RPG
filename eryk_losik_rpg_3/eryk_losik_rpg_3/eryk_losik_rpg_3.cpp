#include "pch.h"
#include <iostream>
#include "Game.h"
#include <stdlib.h>
#include <ctime>
#include "Weapon.h"
#include "Armor.h"
#include "Coffee.h"

using namespace std;

void battle(Player& p1, Opponent& o1) {
	while (p1.getHp() > 0 && o1.getHp() > 0) {


		int def = rand() % 5;
		if (def < 3) {
			o1.takeDmg(p1.getStrength());
		}
		else {
			p1.takeDmg(o1.getStrength());
		}
		cout << "actual.hp: " << p1.getHp() << endl;
		cout << "act.op.hp: " << o1.getHp() << endl;
	}
	if (p1.getHp() > 0) {
		cout << "you won the battle!" << endl << endl;
	}
	else {
		cout << "you lost the battle!" << endl << endl;
	}
}

void weaponInfo(Weapon weapon) {
	cout << "Name: " << weapon.getName() << endl;
	cout << "Damage: " << weapon.getDamage() << endl;
	cout << "Description: " << weapon.getDescription() << endl;
}

void showWeapons(Player &player) {

	cout << endl << "WEAPONS: " << endl;
	vector<Weapon> tempVector = player.getInventory().getWeapons();

	for (int i = 0; i < tempVector.size(); i++) {
		weaponInfo(tempVector[i]);
	}
}

void armorInfo(Armor armor) {
	cout << "Name: " << armor.getName() << endl;
	cout << "Defence: " << armor.getDefence() << endl;
	cout << "Description: " << armor.getDescription() << endl;
}

void showArmors(Player &player) {

	cout << endl << "ARMORS: " << endl;
	vector<Armor> tempVector = player.getInventory().getArmors();

	for (int i = 0; i < tempVector.size(); i++) {
		armorInfo(tempVector[i]);
	}
}

void coffeeInfo(Coffee coffee) {
	cout << "Name: " << coffee.getName() << endl;
	cout << "Stamina increase: " << coffee.getStamina() << endl;
	cout << "Hp increase: " << coffee.getHp() << endl;
	cout << "Strength increase: " << coffee.getStrength() << endl;
}

void showCoffies(Player &player) {

	cout << endl << "COFFIES: " << endl;
	vector<Coffee> tempVector = player.getInventory().getCoffies();

	for (int i = 0; i < tempVector.size(); i++) {
		coffeeInfo(tempVector[i]);
	}
}


int main() {

	cout << "	Pozwolisz, ze wciele Cie w role zwyczajnego pracownika korporacji, ktory powiedzial nie, ktory ma dosc" << endl << endl;
	cout << "	Yuor fake 'friend' incoming! This will be your first fight!" << endl;

	srand(time(NULL));
	Game & game = Game::getInstance();
	//Game & game2 = Game::getInstance(); //sprawdzanie poprawnosci singletona
	Player player = game.createPlayer();
	
	cout << "hp: " << player.getHp() << endl;
	cout << "strength: " << player.getStrength() << endl;
	cout << "stamina: " << player.getStamina() << endl;
	cout << "defence: " << player.getDefence() << endl << endl;

	Opponent opponent = game.createOpponent();

	cout << "op.hp: " << opponent.getHp() << endl;
	cout << "op.strength: " << opponent.getStrength() << endl;
	cout << "op.stamina: " << opponent.getStamina() << endl;
	cout << "op.defence: " << opponent.getDefence() << endl << endl;

	battle(player, opponent);

	vector<Weapon> weapons;
	vector<Armor> armors;
	vector<Coffee> coffees;

	try {
		Weapon weapon1 = Weapon("Pen",5,"Solid and expensive Parker");
		player.getInventory().addWeapon(weapon1);
		Weapon weapon2 = Weapon("Stapler",8,"You don't need this");
		player.getInventory().addWeapon(weapon2);
		Weapon weapon3 = Weapon("Keyboard",15,"Who's the man?");
		player.getInventory().addWeapon(weapon3);
		//Weapon weapon4 = Weapon("Family Photo",10,"Photo of beautiful wife and children, a very dangerous weapon");
		//player.getInventory().addWeapon(weapon4);

		Armor armor1 = Armor("Suit",20,"Elegant and stylish suit made by VIPO");
		player.getInventory().addArmor(armor1);
		Armor armor2 = Armor("Briefcase",15,"You can put something in it or defend from (for example) keyboard");
		player.getInventory().addArmor(armor2);
		Armor armor3 = Armor("Bandana",5,"Made from one of your victims sleeve");
		player.getInventory().addArmor(armor3);
		//Armor armor4 = Armor(5);
		//player.getInventory().addArmor(armor4);
		
		Coffee coffee1 = Coffee("Cappucino",5,0,0);
		player.getInventory().addCoffee(coffee1);
		Coffee coffee2 = Coffee("Latte", 0, 5, 0);
		player.getInventory().addCoffee(coffee2);
		Coffee coffee3 = Coffee("Espresso", 0, 0, 5);
		player.getInventory().addCoffee(coffee3);
	}
	catch (const char* e)
	{
		cerr << e << endl;
	}

	weapons = player.getInventory().getWeapons();
	armors = player.getInventory().getArmors();
	coffees = player.getInventory().getCoffies();

	cout << "Weapons size: " << weapons.size() << endl;
	cout << "Armors size: " << armors.size() << endl;
	cout << "Coffies size: " << coffees.size() << endl;

	showWeapons(player);
	showArmors(player);
	showCoffies(player);

	player.getInventory().deleteWeapon(1); //reczne usuwanie itemow
	showWeapons(player);

	return 0;
}