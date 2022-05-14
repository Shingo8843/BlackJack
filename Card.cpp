/*
 * Card.cpp
 *
 *  Created on: Oct 12, 2020
 *      Author: shing
 */

#include "Card.h"

Card::Card() {
	rank = RANK::ACE;
	suit = SUIT::CLUBS;
	IsFaceUp = true;
}
//Function getValue

int Card::getValue(){
	if (IsFaceUp == true){
		int convert[] = {0,1,2,3,4,5,6,7,8,9,10,10,10,10};
		int R = convert[rank];
		return R;
		//Return the value of the card if the card is facing up. Otherwise return 0.
		//NOTE: The king, queen, jack should also return a value 10
		//END FUNCTION
	}
	return 0;
};

void Card::flip(){
	//Flips a card. Face up becomes face down, and face down becomes face up
	IsFaceUp  = !IsFaceUp;
};

/*
 * overloaded << operator for Card Class
Create 2 constant string arrays named RANKS and SUITS (RANKS will contain elements like g0h, gAh
etc and SUITS will contain gSh, gCh etc) and use these string arrays to print appropriate rank
and suit when displaying the card. The enumerators created in the card class will work like the
index for the above arrays.
if(IsFaceUp){
	string RANKS =
}
IF the card is facing up THEN
store the rank and suit in the output object.
ELSE
store "XX"
END IF
Return output object [See overloaded << class example]
HINT: This function should print JH for jack of hearts or 5S for 5 spades etc for each card.
END FUNCTION
 */

