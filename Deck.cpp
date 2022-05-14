/*
 * Deck.cpp
 *
 *  Created on: Oct 12, 2020
 *      Author: shing
 */

#include "Deck.h"


Deck::Deck() {
	// TODO Auto-generated constructor stub

}
Deck:: ~Deck(){
	//Call the function cardVector.reserve(52)
	//Call function populate()
	cardVector.reserve(52);
	Deck::populate();
};
void Deck::populate(){
	//Creates a standard deck of 52 cards.
	//Call function clearHand()
	//To create standard deck iterate through all ranks and suits [use nested loop on each enumerator]
	//call function add(new Card(static_cast<Card::RANK>(r), static_cast<Card::SUIT>(s)))

	for(int s = 1;s< 4;s++ ){
		for(int r = 1;r <= 13;r++){
			Card *c = new Card;
			c->rank = static_cast<Card::RANK>(r);
			c->suit = static_cast<Card::SUIT>(s);
			Deck::add(c);
		}
	}
	//
} ;
void Deck::shuffle(){
	//Shuffles cards.
	//Call function random_shuffle(cardVector.begin(), cardVector.end())
	//[You will need to include the standard library named algorithms for this to work]

	srand(time(0));
	random_shuffle(cardVector.begin(), cardVector.end());
};
void Deck::deal(Hand *aHand){
	//Deals one card to a hand. A hand is any player.
	//IF cardVector is not empty [use empty() in vector library] THEN
	//call aHand.add(cardVector.back())
	//call cardVector.pop_back()
	//ELSE
	//display an appropriate message indicating that you are out of cards and are unable to
	//deal.
	if(Deck::cardVector.empty() == 0){
		aHand->add(cardVector.back());
		Deck::cardVector.pop_back();
	}
	else{
		std::cout<<"You are out of cards. Not able to deal."<<std::endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		populate();
	}
}//(in &aHand : Hand	)))
void Deck::additionalCards(GenericPlayer *aGenericPlayer){
	//Gives additional cards to any player for as long as, that player can and wants to hit.
	//WHILE generic player object is not busted and keeps hitting
	//call the function deal and pass the generic player object to it.
	//Display generic player object using cout [this will invoke the overloaded insertion operator]
	//IF generic player object is busted THEN
	//call the function bust() using the generic player object
	//END IF
	//END WHILE
	while(aGenericPlayer->getTotal() <21){
		bool hit = aGenericPlayer->isHitting();
		if(hit == 1){
			Deck::deal(aGenericPlayer);
			std::cout<<"Card Added!"<<std::endl;
			std::cout<<*aGenericPlayer<<std::endl;
			if(aGenericPlayer->getTotal() >21){
				bool x = aGenericPlayer->bust();
				x = x&&x;
			}
		}
		else{
			break;
		}
	}
};
void Deck::Display(){
	for(int n = 0;n<52;n++){
		std::cout<<*cardVector.at(n)<<endl;
	}

}










