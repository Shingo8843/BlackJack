/*
 * Card.h
 *
 *  Created on: Oct 12, 2020
 *      Author: shing
 */

#ifndef CARD_H_
#define CARD_H_
#include <string>
#include <iostream>
#include <ostream>
#include <vector>
#include <cctype>
#include <string>
#include <time.h>

using namespace std;


class Card {
public:
	Card();
	enum RANK{ACE =1,TWO= 2,THREE = 3,FOUR = 4,FIVE = 5,SIX = 6,SEVEN = 7,EIGHT = 8,NINE = 9,TEN = 10,JACK = 10,QUEEN = 10,KING = 10};
	enum SUIT{CLUBS ='C',DIAMONDS = 'D',HEARTS = 'H',SPADES = 'S'};
	int getValue();
	void setValue(int);
	void flip();

	RANK rank ;
	SUIT suit ;
	//Card overloading Operator
	friend std::ostream &operator<<( std::ostream &output, const Card &D ) {

		string RANKS[] = {"0","A","2","3","4","5","6","7","8","9","10","J","Q","K"};
		string SUITS[] = {"0","C","D","H","S"};
		if(D.IsFaceUp){
		output<<RANKS[D.rank]<<SUITS[D.suit];
		}
		else{
			output<<"XX";
		}
		return output;
	}
private:
	bool IsFaceUp;
};

#endif /* CARD_H_ */

