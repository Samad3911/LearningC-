//============================================================================
// Name        : ArraysAndVector.cpp
// Author      : Abdul Samad
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <array>
using namespace std;

int main() {
	array<int, 10> myArray{};

	for(int i=0;i<10;i++)
	{
		myArray[i]=i*2;
	}

	for(int a:myArray)
	{
		cout<<a<<endl;
	}
	cout<<"Size of array is: "<<myArray.size()<<endl;

	return 0;
}
