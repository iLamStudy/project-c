//usenbstime30.cpp -- use nbstime30 
//compile nbstime30.cpp and usenbstime30.cpp together
#include <iostream>
#include "nbstime30.h"

int main() {
	using std::cout;
	using std::endl;

	Time aida(3,35);
	Time tosca(2,48);
	Time temp;

	cout << "Adia and Tosca: \n";
	cout << aida << "; " << tosca << endl;

	temp = aida + tosca;
	cout << "Aida + tosca : " << temp << endl;

	temp = aida * 1.17;
	cout << "Aida * 1.17 : " << temp << endl;
	cout << "10.0 * Tosca : " << 10.0 * tosca << endl;
	return 0;
}
