/*
 * House.h
 *
 *  Created on: Oct 12, 2020
 *      Author: shing
 */

#ifndef HOUSE_H_
#define HOUSE_H_
#include <string>
#include <iostream>
#include <vector>
#include <cctype>
#include <string>
#include <time.h>

#include "GenericPlayer.h"
#include "Hand.h"
#include "Card.h"

using namespace std;

class House:public GenericPlayer{
public:
	House();//(in const & name : string = "Dealer")
	virtual ~House(){};
	virtual bool isHitting(){
		//Concrete function. Indicates whether the dealer wants to hit
		//IF the value returned by getTotal() IS LESS THAN EQUAL TO 16 THEN
		//The House hits (return appropriate values, use if..else, if needed)
		if(getTotal()<=16){
			return 1;
		}
		else{
			return 0;
		}
	};
	void flipFirstCard();

};

#endif /* HOUSE_H_ */
