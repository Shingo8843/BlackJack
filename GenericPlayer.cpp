/*
 * GenericPlayer.cpp
 *
 *  Created on: Oct 12, 2020
 *      Author: shing
 */

#include "GenericPlayer.h"

GenericPlayer::GenericPlayer() {
	//Initialize the member variables using the member initializer in the constructor.
	//The body of the constructor remains empty.
}

GenericPlayer::~GenericPlayer(){};

const bool GenericPlayer::isBusted(){
	//Indicates whether the generic player is busted.
	//IF getTotal() IS GREATER THAN 21 THEN
	//Return appropriate value
	//ELSE
	//Return appropriate value
	if (Hand::getTotal() >21){
		return 1;
	}
	return 0;
};
const bool GenericPlayer::bust(){
	//Print the name and display that the player has busted
	std::cout<<GenericPlayer::Name<<" is busted"<<std::endl;
	return 0;
};
std::string GenericPlayer::getName(){//Get name of the Generic player
	return GenericPlayer::Name;
};
void GenericPlayer::setName(std::string name){//set name of the generic player
	GenericPlayer::Name= name;
};

