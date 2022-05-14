/*
 * Hand.cpp
 *
 *  Created on: Oct 12, 2020
 *      Author: shing
 */

#include "Hand.h"
#include "Card.h"
#include "Deck.h"
Hand::Hand() {
	// TODO Auto-generated constructor stub
	cardVector.reserve(7);
}
Hand::~Hand() {
	// TODO Auto-generated Destructor stub
	Hand::clearHand();
}

void Hand::clearHand(){
	//Clears all cards from the hand
	//Declare an iterator of the type vector<Card*>
	std::vector <Card*>::iterator iter;
	//using the iterator delete each *iter [name of the iterator]
	for (iter = cardVector.begin();iter != cardVector.end();++iter){
		//Set the *iter to NULL -- Good practice
		delete *iter;
		*iter = NULL;
	}
	//Call function clear() on cardVector
	cardVector.clear();
}
int Hand::getTotal(){
	//Returns the total value of the hand.
	//IF cardVector is empty [Hint: empty is a function defined in vector class] THEN
	//return 0
	//ENDIF
	if (cardVector.empty() == 1){
		return 0;
	}
	//IF the value of the first card is 0 THEN
	//return 0
	//Hint: use cardVector[0]-> getValue()
	//ENDIF
	else if((Hand::cardVector[0]-> getValue()) == 0){
		return 0;
	}

	else {
		//To add up the card values create a const_iterator
		//LOOP through the vector (using the iterator)
		//calculate the total value for all the cards [Hint use (*iter)->getValue() to
		//get the value of each card.]
		//END LOOP
		std::vector<Card*>::iterator i;
		int sum = 0;
		for (i = cardVector.begin(); i != cardVector.end(); ++i)
		{
			sum += ((*i)->getValue());
		}
		//LOOP through the hand and check if it contains an Ace
		//IF the total IS LESS THAN AND EQUAL TO 11, THEN
		//add 10 to the total [since we have already set the ace to 1].
		//Return the total.
		//ENDIF
		//END LOOP
		for(unsigned int j = 0;j<cardVector.size();j++){
			if (cardVector[j]->rank == RANK::ACE){
				if(sum <= 11){
					sum +=10;
				}
			}
		}
		return sum;
	}

}
void Hand::add(Card* cardPtr){
	//Adds a card to the hand.
	//Call push_back() on the cardVector and pass the cardPtr as its argument
	Hand::cardVector.push_back(cardPtr);
};
