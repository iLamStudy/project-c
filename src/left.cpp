//left.cpp
#include <iostream>

const int ArSize = 80;

char * left(const char * str_in,int start = 1);

int main () {
	using namespace std;

	char sample[ArSize];

	cout << "Enter a string :\n";

	cin.get(sample,ArSize);

	char *ps = left(sample,4);

	cout << ps << endl;

	delete [] ps;
	
	ps = left(sample);

	cout << ps << endl;
	delete [] ps;
	return 0;
}

char * left(const char * str_in,int start) {
	if(start < 0 )start = 0;
	char *p = new char[start+1];

	int i ;
	for(i=0;i<start&&str_in[i];i++)
		p[i] = str_in[i];

	while(i <= start)
		p[i++] = '\0';
	return p;
}
