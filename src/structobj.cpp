//structobj.cpp 
#include <iostream>
using namespace std;
struct person {
	char 	name[30];
	int	age;
	char	sex;
	string	email;
};

int main () {
	person xiaom = {
		"xiaoming",
		15,
		'm',
		"xiaoming@163.com"
	};

	cout << "the Person :" << xiaom.name << " \n";
	cout << "age : " << xiaom.age << " sex : " << xiaom.sex << " \n";
	cout << "email : " << xiaom.email << endl;

	cout << "Please enter a email to modify person email!" << endl;
	getline(cin,xiaom.email);
	cout << "Person: " << xiaom.name << "  email: " << xiaom.email << endl;
	cin.get();
	return 0;

}
