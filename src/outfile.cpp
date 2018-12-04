//outfile.cpp
#include <iostream>
#include <fstream>

int main() {
	using namespace std;

	char automobile[50];

	int year;
	double d_price_a;
	double d_price_b;

	ofstream outFile;
	outFile.open("carinfo.txt");
	cout << "Enter the model of automobile : ";
	cin.getline(automobile,50);
	cout << "Enter the model year : ";
	cin >> year;

	cout << "Enter the origin asking price :";
	cin >> d_price_a;
	d_price_b = 0.913 * d_price_a;

	//display infomation on screen with cout
	cout << fixed ;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "Make and Model: " << automobile << endl;
	cout << "Year : " << year << "\t";
	cout << "a : $" << d_price_a << "\t";
	cout << "b : $" << d_price_b << "\n";

	//write infomation into file outFile
	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "Make and Model : " << automobile << endl;
	outFile << "Year : " << year << "\t";
	outFile << "Price A : " << d_price_a << "\t";
	outFile << "Price B : " << d_price_b << endl;
	
	outFile.close();
	return 0;
}
