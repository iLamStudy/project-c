//morechar.cpp lanbery study
//NBS
#include <iostream>

int main() {
	using namespace std;
	char ch = 'M';
	int i = ch;

	cout << "The ASCII 码 ：" << ch << " = " << i << endl;

	cout << "Add one to character code " << "\n";
	ch =ch +1;
	i = ch;
	cout << "After add one " << ch << " = " << i << "\n";

	cout << " cout.put(ch) : ";
	cout.put(ch);
	cout.put('!');
	cout << endl << "Done ." << endl;
	return 0;
	
}
