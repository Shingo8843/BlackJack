/*
 * GenericPlayer.h
 *
 *  Created on: Oct 12, 2020
 *      Author: shing
 */

#ifndef GENERICPLAYER_H_
#define GENERICPLAYER_H_
#include <string>
#include <iostream>
#include <vector>
#include <cctype>
#include <string>
using namespace std;


#include "Hand.h"


class GenericPlayer: public Hand{
public:
	GenericPlayer();
	virtual ~GenericPlayer();
	virtual bool isHitting(){return 0;};
	const bool isBusted();
	const bool bust();
	std::string getName();
	void setName(std::string);
	std::string Name = "Player";

	friend std::ostream &operator<<( std::ostream &output, GenericPlayer &A ) {
		output<<A.Name<<":\t";
		vector<Card*>::const_iterator pCard;
		if (!A.cardVector.empty()){
			for(pCard = A.cardVector.begin();pCard!=A.cardVector.end();++pCard){
				output<<*(*pCard)<<"\t";
			}
			if (A.getTotal() != 0){
				cout<<"("<<A.getTotal()<<")";
			}
			else
			{
				cout<<"\t";
			}
		}
		return output;
		/*
		 * overloaded << operator for GenericPlayer Class
		Store the name followed by a tab space in the output object.
		Create a vector iterator of type Card*
		IF the cardVector for the generic player object is not empty THEN
		LOOP through all cards for that player
		store the value of the card followed by the tab space [ use *(*iterator_name)]
		END LOOP
		IF the total score for the player is NOT EQUAL TO 0 THEN
		append the total to the output object
		END IF
		ELSE
		append "<empty>"
		END IF

		Return output object
		Example Output: Say the name of the player is Player1 and the player has 5 spades and a jack of
		hearts and the dealerÅfs first card is still facing down then this function should print an
		output as follows:
		Player1 5s JH (15)
		House XX 9C
		END FUNCTION
		 */
	}
	//Generic Player overloading Operator
};

#endif /* GENERICPLAYER_H_ */
