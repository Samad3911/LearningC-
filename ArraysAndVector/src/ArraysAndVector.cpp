//============================================================================
// Name        : ArraysAndVector.cpp
// Author      : Abdul Samad
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main() {
	array<int, 10> myArray{};
	vector<string> pets;

	for(int i=0;i<10;i++)
	{
		myArray[i]=i*2;
	}

	for(int a:myArray)
	{
		cout<<a<<endl;
	}
	cout<<"Size of array is: "<<myArray.size()<<endl;

	pets.push_back("Dog");
	pets.push_back("Cat");
	pets.push_back("Goat");
	pets.push_back("Cow");
	pets.push_back("Rabbit");

	pets.insert(pets.begin()+2,"John Baug");

	pets.pop_back();

	for(string a: pets)
		cout<<a<<endl;

	return 0;
}
