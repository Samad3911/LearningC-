/*
 * Priest.cpp
 *
 *  Created on: 31-Jul-2021
 *      Author: abdul
 */

#include "player.h"

class Priest: public Player{

public:

	Priest():Player(){

	}

	Priest(string name, Race race, int hitPoints, int magicPoints): Player(name,race,hitPoints,magicPoints){

	}


	virtual string attack() const {
		return "I will assault you with Holy Wrath!";
	}

	~Priest(){

	}

};



