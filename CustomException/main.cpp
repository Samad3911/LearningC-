/*
 * main.cpp
 *
 *  Created on: 10-Jul-2021
 *      Author: abdul
 */

#include <iostream>

using namespace std;


class WarpDriveOverHeating : public overflow_error
{
public:
	WarpDriveOverHeating(const string& err): overflow_error(err)
	{

	}
};

void wrapTest(int temp)
{
	if(temp>80)
		throw WarpDriveOverHeating("Warp drive has exceeded safe temperature tolerance");
	else
		cout<<"Temperature is "<<temp<<endl;
}

int main()
{
   try
   {
	   wrapTest(67);
	   wrapTest(16);
	   wrapTest(78);
	   wrapTest(100);
	   wrapTest(67);

   }catch(WarpDriveOverHeating& ex)
   {
	   cout<<ex.what()<<endl;
   }

	return 0;
}



