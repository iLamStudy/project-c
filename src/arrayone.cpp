//arrayone.cpp --small arrays
#include <iostream>

int main() {
	using namespace std;
	
	int yams[3];
	
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;

	int yamcosts[3] = {70,20,5};

	cout << "Costs yams :" << yams[0] + yams[1] + yams[2] <<endl;

	cout << "Costs yamcosts size :" << sizeof yamcosts << " . \n";
	return 0;
}
