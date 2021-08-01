#include "player.h"

class Warrior: public Player {

public:
	Warrior():Player(){

	}

	Warrior(string name, Race race, int hitPoints, int magicPoints):Player(name,race,hitPoints,magicPoints){

	}

	virtual string attack() const {
		return "I will destroy you with my sword, foul demon!";
	}

	~Warrior(){

	}

};
