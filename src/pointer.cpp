//pointer.cpp using poniter
#include <iostream>

int main() {
	using namespace std;

	int updates = 6;
	int * p_updates; 	//declare pointer to an int
	
	p_updates = &updates;	//assign address of int to poniter

	cout << "Values :Updates =" << updates;
	cout << ",p_updates = " << *p_updates << endl;

	cout << "Address &updates : " << &updates;
	cout << ",p_updates = " << p_updates << endl;

	//used poniter to change value
	*p_updates = *p_updates + 1;
	cout << "Now updates = " << updates << endl;
	return 0;
}
