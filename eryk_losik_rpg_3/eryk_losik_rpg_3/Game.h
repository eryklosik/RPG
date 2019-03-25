#pragma once
#include <iostream>
#include <conio.h>
#include "Player.h"
using namespace std;

class Game
{
private:
	Game();
	Game(const Game&) = delete;

public:
	static Game& getInstance();
	Player createPlayer();
	Opponent createOpponent();
	~Game();
};

