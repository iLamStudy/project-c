//outfile.cpp
#include <iostream>
#include <fstream>
#ifdef WIN32
#include <direct.h>
#endif
#ifdef linux 
#include <dirent.h>
#endif

using namespace std;

// assert folder exists
// lanbery

bool dirExists(const string &dir) {
	

	if(_access(dir.c_str(),0) == -1 ) {
		cout << dir << " is not existing " << endl;
		cout << " now create it ." << endl;

#ifdef WIN32
		int flag = mkdir(dir.c_str());
#endif
#ifdef linux
		int flag = mkdir(dir.c_str() , 0777);
#endif
		return flag == 0;

	
	}
	return false;
}
string dataDir = "./data/";

int main() {

	char automobile[50];

	int year;
	double d_price_a;
	double d_price_b;

	ofstream outFile;

	
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
	if(dirExists("data/")){
		cout << "create folder success." << endl;
	}else {
		cout << "create folder fail." << endl;
	
	}

	outFile.open("./data/outfile.txt");
	cout << "write to file." << endl;		
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
