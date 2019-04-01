#include "pch.h"
#include "Game.h"
#include <conio.h>
#include "Opponent.h"

Game::Game()
{
	//cout << "game constructor"<<endl;
}


Game::~Game()
{
}

Game& Game::getInstance() {
	static Game g;
	return g;

}

Player Game::createPlayer() { // tworzenie postaci
	Player p1 = Player("cud_chlopcze", 100, 10, 10, 10, 10);
	return p1;
}

Opponent Game::createOpponent(){ //tworzenie przeciwnika
	Opponent o1 = Opponent("ten_zly", 50, 5, 5, 5, 5);
	return o1;
}