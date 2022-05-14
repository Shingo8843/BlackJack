/*
 * main.cpp
 *
 *  Created on: Oct 12, 2020
 *      Author: shing
 */
#include "Game.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	//Print appropriate welcome message to begin the game
	//Create a character variable called again and initialize it to 'y'
	std::cout<<"Welcome To the BJ"<<std::endl;
	char again = 'y';
	//Prompt for the player name and store it in variable called name.
	//Create a game object and pass the name to it
	//Call the function play() using the game object. [Use a sentinel controlled loop around this to prompt
	std::cout<<"Please Enter Your Name"<<std::endl;
	string name;
	cin>>name;
	while(1){
		Game game(name);
		game.play();
		std::cout<<"Would you like to continue?"<<endl<<"Press y to continue"<<endl<<"Press others to quit"<<endl;
		char next;
		cin>>next;
		//the player and check if he wants to play again to stay in the game. You exit the game when the user
		//chooses 'no']
		//END FUNCTION
		if(next == 'Y'){
			next = 'y';
		}
		if(next == again){
		}
		else{
			break;
		}

	}
	return 0;
}
