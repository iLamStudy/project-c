//namesp.cpp -- the impl C++
#include <iostream>
#include "namesp.h"

namespace pers {
	using std::cout;
	using std::cin;

	void getPerson(Person & rp ) {
		cout << "Enter first name:";
		cin >> rp.fname;
		cout << "Enter last name : ";
		cin >> rp.lname;
	}

	void showPerson(const Person & rp) {
		std::cout << rp.lname << ", " << rp.fname;
	}
}

namespace debts {
	void getDebt(Debt & rd) {
		getPerson(rd.name);
		std::cout << "Enter debt : ";
		std::cin 
	}
}
