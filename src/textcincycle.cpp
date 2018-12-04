//textcincycle.cpp
#include <iostream>

int main () {
	using namespace std;
	char ch;

	int count = 0;

	cout << "Enter characters;Enter # to quit:\n";

	cin >> ch;
	string str_ins = &ch; //contact string and char must used pointer value(&);
	while(ch != '#'){
		cout << ch;
		++count;
		cin >> ch;
		str_ins += &ch;
	}
	
	cout << endl << "You input characters total :" << count << "\n";
	cout << "your input : " << str_ins << endl;
	
	return 0;
}
