/*
 * House.cpp
 *
 *  Created on: Oct 12, 2020
 *      Author: shing
 */

#include "House.h"

House::House() {
	// TODO Auto-generated constructor stub
	//Call the base class constructor to initialize the member variable.
	GenericPlayer();
	this->House::setName("Dealer");

}
void House::flipFirstCard(){
	//Flips over the first card.
	//IF cardVector is not empty THEN
	//call the flip function on the first element of the vector.
	//ELSE
	//Display an appropriate message indicating that there are no cards to flip
	if(!House::cardVector.empty()){
		cardVector.at(0)->flip();
		std::cout<<"Card Flipped"<<std::endl;
	}
	else{
		std::cout<<"No Cards To Flip"<<std::endl;
	}
}
