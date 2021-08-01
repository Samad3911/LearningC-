/*
 * player.h
 *
 *  Created on: 31-Jul-2021
 *      Author: abdul
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <iostream>
#include <string>

using namespace std;

enum Race{
	HUMAN,
	ELF,
	DWARF,
	ORC,
	TROLL
};

class Player{
public:

	Player():m_Name(""),m_Race(Race::HUMAN),m_HitPoints(0),m_MagicPoints(0){

	}

	Player(string name, Race race, int hitPoints, int magicPoints):m_Name(name),m_Race(race),m_HitPoints(hitPoints),m_MagicPoints(magicPoints){

	}

	string getName() const {
		return m_Name;
	}

	void setName(string name){
		this->m_Name = name;
	}

	Race getRace() const {
		return m_Race;
	}

	void setRace(Race race){
		this->m_Race = race;
	}

	int getHitPoints() const {
		return m_HitPoints;
	}

	void setHitPoints(int hitPoints){
		this->m_HitPoints = hitPoints;
	}

	int getMagicPoints() const {
		return m_MagicPoints;
	}

	void setMagicPoints(int magicPoints){
		this->m_MagicPoints = magicPoints;
	}

	string whatRace(){
		string race;

		if(this->m_Race == HUMAN)
			race = "Human";
		else if(this->m_Race == ELF)
			race = "Elf";
		else if(this->m_Race == DWARF)
			race = "Dwarf";
		else if(this->m_Race == ORC)
			race = "ORC";
		else if(this->m_Race == TROLL)
			race = "Troll";

		return race;
	}

	virtual string attack() const =0;

	virtual ~Player(){

	}

private:
	string m_Name;
	Race m_Race;
	int m_HitPoints;
	int m_MagicPoints;
};



#endif /* PLAYER_H_ */
