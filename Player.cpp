/*
 * Player.cpp
 *
 *  Created on: Oct 12, 2020
 *      Author: shing
 */

#include "Player.h"

Player::Player() {
	// TODO Auto-generated constructor stub
	//Print the name and display that the player has busted
	GenericPlayer();

}

const bool Player::win(){
	//Print the name and display that the player has won
	std::cout<<GenericPlayer::Name<<", You Win!!\(^o^)/"<<std::endl;
	return 0;
};
const bool Player::lose(){
	//Print the name and display that the player has lost
	std::cout<<GenericPlayer::Name<<", You Lose (_ _|||)"<<std::endl;
	return 0;
};
const bool Player::push(){
	//Print the name and display that the player has pushed
	std::cout<<GenericPlayer::Name<<" and Dealer Have the Same Value"<<endl;
	return 0;
};


