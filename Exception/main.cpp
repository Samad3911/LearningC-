/*
 * main.cpp
 *
 *  Created on: 10-Jul-2021
 *      Author: abdul
 */

#include <iostream>

using namespace std;

char getLetterGrade(int score)
{
	if(score >= 0 && score <= 59)
		return 'F';
	else if(score >= 60 && score <=69)
		return 'D';
	else if(score >= 70 && score <= 79)
		return 'C';
	else if(score >= 80 && score<= 89)
		return 'B';
	else if(score >=90 && score<= 100)
		return 'A';
	else
		throw out_of_range("Your score must be between 0 and 100");
}


int main()
{
	try{
         char grade = getLetterGrade(-2);
         cout<<grade<<endl;
	}catch(out_of_range& ex)
	{
		cout<<ex.what();
	}

	return 0;
}


