/*
 * Game.h
 *
 *  Created on: Oct 12, 2020
 *      Author: shing
 */

#ifndef GAME_H_
#define GAME_H_
#include <string>
#include <iostream>
#include <vector>
#include <cctype>
#include <string>
#include <time.h>

#include "Deck.h"
#include "Player.h"
#include "House.h"

using namespace std;


class Game {
public:
	Game(string);//(in const &name : string)
	~Game();
	void play();
private:
	Deck deck;
	House house;
	Player player;
	GenericPlayer *houseG = &house;
	GenericPlayer *playerG = &player;
	bool result;
};

#endif /* GAME_H_ */


//Questions to ask
/*
 * How to call the functions under inheritance(Class Game,House,Player
 * Overloading Operator(Class Card,General Player)
 * Why is return rank  invalid(Class Card)
 *add(new Card(static_cast<Card::RANK>(r), static_cast<Card::SUIT>(s)))			(Class Deck)
 */

