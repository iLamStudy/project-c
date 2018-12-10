//usenbstime1.cpp
#include <iostream>
#include "nbstime1.h"

int main() {
	using std::cout;
	using std::endl;

	Time planning;
	Time coding(2,40);
	Time fixing(5,55);

	Time total;

	cout << "Planning time =";
	planning.Show();
	cout << endl;

	cout << "fixing time = ";
	fixing.Show();
	cout << endl;

	total = coding + fixing;

	cout << "coding + fixing =";
	total.Show();
	cout << endl;

	Time morefixing(3,20);
	cout << "more fixing time ";
	morefixing.Show();
	cout << endl;

	total = morefixing.operator+(total);
	cout << "morefixing.operator+(total)=";
	total.Show();
	cout << endl;
	return 0;
}