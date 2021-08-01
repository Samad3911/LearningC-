//============================================================================
// Name        : RPGPlayer.cpp
// Author      : Abdul Samad
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

#include "Warrior.cpp"
#include "Priest.cpp"
#include "Mage.cpp"

using namespace std;


enum PlayerType{
	WARRIOR,
	PRIEST,
	MAGE
};

int menu(){
	int choice;
	cout<<"Game Menu"<<endl;
	cout<<"0.Exit"<<endl;
	cout<<"1.Add Player"<<endl;
	cout<<"2.Display details of player"<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>choice;
	return choice;
}

int choosePlayerType(){
	int choice;
	cout<<"Player Type"<<endl;
	cout<<"1.Warrior"<<endl;
	cout<<"2.Priest"<<endl;
	cout<<"3.Mage"<<endl;
	cout<<"Choose your player"<<endl;
	cin>>choice;
	return choice;
}

int chooseRace(){
	int choice;
	cout<<"Select Race"<<endl;
	cout<<"1.Human"<<endl;
	cout<<"2.Elf"<<endl;
	cout<<"3.Dwarf"<<endl;
	cout<<"4.ORC"<<endl;
	cout<<"5.Troll"<<endl;
	cout<<"Choose the player race"<<endl;
	cin>>choice;
	return choice;
}

int main() {
	vector<Player*> players;
	string playerName;
	Race race;
	int playerType,playerRace;

	while(1){
		switch(menu()){

		case 0:
			exit(0);
			break;
		case 1:
			cout<<"Select player from the menu"<<endl;
			playerType = choosePlayerType();
			while(playerType < 1 || playerType > 3){
				cout<<"Choose correct options "<<endl;
				playerType = choosePlayerType();
			}

			cout<<"Select player race from the menu"<<endl;

			playerRace = chooseRace();
			while(playerRace < 1 || playerRace >5){
				cout<<"Choose correct race"<<endl;
				playerRace = chooseRace();
			}

			switch(playerRace){
			case 1:
				race = Race::HUMAN;
				break;
			case 2:
				race = Race::ELF;
				break;
			case 3:
				race = Race::DWARF;
				break;
			case 4:
				race = Race::ORC;
				break;
			case 5:
				race = Race::TROLL;
				break;
			default:
				break;
			}

            cout<<"Enter player name"<<endl;
            getline(cin,playerName);
			switch(playerType){
			case 1:
				players.push_back(new Warrior(playerName,race,200,0));
				break;
			case 2:
				players.push_back(new Priest(playerName,race,100,200));
				break;
			case 3:
				players.push_back(new Priest(playerName,race,150,150));
				break;
			default:
				break;

			}
			break;

		case 2:
			if(players.empty()){
				cout<<"Add some players first\n";
			}
			else{
				for(auto player: players){
					cout<<"I am a "<<player->whatRace()<<" and my attack is: "<<player->attack()<<endl;
				}
			}
			break;

		default:
			break;

		}
	}

	return 0;
}
