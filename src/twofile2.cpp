//twofile2.cpp -- variables with internal and external linkage
#include <iostream>
extern int tom;							//tom defined eleswhere
static int dick 	= 10;					//overrides external dick
int harray 		= 200;					//external variable definition,
								//no conflict with twofile1 harray

void remote_access() {
	using namespace std;

	cout << "remote_access() reports the following addresses : \n";
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harray << " = &harray \n";
}

