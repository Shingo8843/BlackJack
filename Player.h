/*
 * Player.h
 *
 *  Created on: Oct 12, 2020
 *      Author: shing
 */

#ifndef PLAYER_H_
#define PLAYER_H_
using namespace std;

#include <string>
#include <iostream>
#include <vector>
#include <cctype>
#include <string.h>
#include <time.h>

#include "GenericPlayer.h"

using namespace std;

class Player :public GenericPlayer{
public:
	Player();
	virtual ~Player(){};
	virtual bool isHitting(){
		char CHOICE = 'Y';
		while(1){
			std::cout<<"Would You Like To Hit?"<<std::endl<<"Y/N"<<endl;
			std::cin>>CHOICE;
			if(CHOICE=='Y'||CHOICE == 'y'){
				std::cout<<"Hit"<<endl;
				return 1;
			}
			else if(CHOICE=='N'||CHOICE == 'n'){
				std::cout<<"Stand"<<endl;
				return 0;
			}
			else{
				std::cout<<"Invalid Entry"<<std::endl;
			}
		}
	};
	const bool win();
	const bool lose();
	const bool push();
};

#endif /* PLAYER_H_ */
