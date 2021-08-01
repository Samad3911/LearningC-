/*
 * Mage.cpp
 *
 *  Created on: 31-Jul-2021
 *      Author: abdul
 */

#include "player.h"

class Mage: public Player{

public:
	Mage():Player(){

	}
	Mage(string name, Race race, int hitPoints, int magicPoints): Player(name,race,hitPoints,magicPoints){

	}

	virtual string attack() const{
		return "I will crush you with the power of my arcane missiles!";
	}

	~Mage(){

	}
};


