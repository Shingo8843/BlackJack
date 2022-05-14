/*
 * Hand.h
 *
 *  Created on: Oct 12, 2020
 *      Author: shing
 */

#ifndef HAND_H_
#define HAND_H_
#include <string>
#include <iostream>
#include <vector>
#include <cctype>
#include <string>
#include <time.h>
#include <iterator>

#include "Hand.h"
#include "Card.h"

using namespace std;


class Hand: public Card{
public:
	Hand();
	virtual ~Hand();
	void add(Card* cardPtr);
	void clearHand();
	int getTotal();
	std::vector <Card*>cardVector;//type must be cardPtr*
};

#endif /* HAND_H_ */
