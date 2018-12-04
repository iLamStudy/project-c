//cubes.cpp
#include <iostream>
double cube (double x);

double refcube(double &rx);

int main() {
	using namespace std;

	double dx = 3.0;
	
	cout << cube(dx);

	cout << " = cube of " << dx << endl;
	cout << refcube(dx);
	cout << " = cube of " << dx << endl;
	
	return 0;
}

double cube (double x){
	x *= x * x;
	return x;
}

double refcube(double &rx){
	rx *= rx*rx;
	return rx;
}
