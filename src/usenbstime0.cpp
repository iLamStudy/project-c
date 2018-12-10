//usenbstime0.cpp -- use nbs time 
//compile nbstime0.cpp and this self cpp
#include <iostream>
#include "nbstime0.h"

int main() {
	using std::cout;
	using std::endl;

	Time planning;
	Time coding(2,40);
	Time fixing(5,55);
	Time total;

	cout << "Planning time = \n";

	planning.Show();
	cout << endl;

	cout << "Coding ";
       	coding.Show();
       	cout << endl;

	cout << "fixing ";
	fixing.Show();
	cout << endl;

	total = coding.Sum(fixing);
	cout << "coding.Sum(fixing) ";
	total.Show();
	cout << endl;


	return 0;
}
