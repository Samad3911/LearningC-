//============================================================================
// Name        : Pointers1.cpp
// Author      : Abdul Samad
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Rectangle {
	int m_Length;
	int m_Breadth;

public:
	Rectangle():m_Length(0),m_Breadth(0){

	}

	Rectangle(int length, int breadth):m_Length(length),m_Breadth(breadth){
		this->m_Length = length;
		this->m_Breadth = breadth;
	}

	int getArea() const {
		return m_Length*m_Breadth;
	}

	int getPerimeter() const {
		return 2*(m_Length+m_Breadth);
	}

	~Rectangle()
	{

	}
};

int main() {
	Rectangle* arr[3];

	arr[0] = new Rectangle(10,5);

	arr[1] = new Rectangle(8,7);

	arr[2] = new Rectangle(6,8);

   for(int i=0; i<3; i++)
   {
    cout<<"Perimeter of "<<i<<" rectangle is: "<<arr[i]->getPerimeter()<<endl;
    cout<<"Area of "<<i<<" rectangle is: "<<arr[i]->getArea()<<endl;
   }

	return 0;
}
