/*
 * Game.cpp
 *
 *  Created on: Oct 12, 2020
 *      Author: shing
 */

#include "Game.h"

Game::Game(string name) {
	// TODO Auto-generated constructor stub
	player.setName(name);
	deck.populate();
	//deck.Display();
	deck.shuffle();
	result = 0;

};

Game::~Game(){

}
void Game::play(){

	for(int i = 0;i<2;i++){//You will need a loop that runs twice and call deal function for each player
		deck.deal(houseG);
		deck.deal(playerG);
	}
	cout<<"Card Dealed to house and player."<<endl;

	//Using the house object call function flipFirstCard().
	house.flipFirstCard();
	//Display player object using cout [to invoke the overloaded insertion operator]
	std::cout<<player<<endl;
	//Display house object using cout [to invoke the overloaded insertion operator]
	std::cout<<house<<endl;

	//Call the additionalCards() using the deck object and pass the player object to it.
	deck.additionalCards(playerG);

	//Using the house object call function flipFirstCard().
	house.flipFirstCard();

	//Display house object using cout [to invoke the overloaded insertion operator]
	std::cout<<house<<endl;

	//Call the additionalCards() using the deck object and passthe house object to it.
	deck.additionalCards(houseG);

	//IF statement
	//IF the house has busted [call isBusted()] THEN
	if(house.isBusted() == 1){
		//IF player has not busted THEN
		if(player.isBusted() == 0){
			//invoke the win function using the player object.
			result = player.win();
		}

	}
	//END IF
	//ELSE

	else{
		//IF player has not busted THEN
		if(player.isBusted() == 0){
			//compare the total score of the player with the house and display the appropriate
			if(player.getTotal() > house.getTotal()){
				//winning, losing, push messages. [requires nested if..else statements]
				result = player.win();
			}
			else if(player.getTotal() < house.getTotal()){
				//winning, losing, push messages. [requires nested if..else statements]
				result = player.lose();
			}
			else{
				result = player.push();
			}
		}
		else{
			result = player.lose();
		}
	}




	//END IF
	//END IF

	//call the clearHand function for player object
	player.clearHand();
	//Call the clearHand() funtion for house object
	house.clearHand();
}

/*
 * FlipFirstCard
 * additional Cards
 */
