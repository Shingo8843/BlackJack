/*
 * Deck.h
 *
 *  Created on: Oct 12, 2020
 *      Author: shing
 */

#ifndef DECK_H_
#define DECK_H_
#include <string>
#include <iostream>
#include <vector>
#include <cctype>
#include <string>
#include <time.h>
#include <algorithm>

#include "Hand.h"
#include "GenericPlayer.h"
#include "Card.h"

using namespace std;

class Deck:public Hand{
public:
	Deck();
	virtual ~Deck();
	void populate();
	void shuffle();
	void deal(Hand *aHand);
	void additionalCards(GenericPlayer *aGenericPlayer);
	void Display();
	friend class Card;

};

#endif /* DECK_H_ */
