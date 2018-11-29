//showMyInfo.cpp -- show My infomation
#include <iostream>

using namespace std;

void show(string,string);  //function show prototype

int main() {
	string name,address;
	cout << "Please input your name : ";
	getline(cin,name);
	cout << "Your input name : " << name << endl;
	cout << "Please input yout address :";
	getline(cin, address);
	show(name,address);
	cin.get();
}

void show(string n,string addr) {
	cout << "Name : " << n << endl;
	cout << "Address : " << addr << endl;
	//cin.get();
}
