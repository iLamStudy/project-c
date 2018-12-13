//usebrass1.cpp --testing bank
//compile brass.h together
#include <iostream>
#include "brass.h"

int main() {
	using std::cout;
	using std::endl;

	Brass Piggy("Porcelot Pigg",381299,4000.0);
	BrassPlus Hoggy("Horatio Hogg",382288,3000.0);


	Piggy.ViewAcct();

	cout << endl;

	Hoggy.ViewAcct();
	cout << endl;

	cout << "Depositing $1000 into the Hogg Account:\n";
	Hoggy.Deposit(1000.0);

	cout << "New Balance :$" << Hoggy.Balance() << endl;

	cout << "Withdraw $ 4200 from the Pigg Account :\n";

	Piggy.Withdraw(4200.00);

	cout << "Piggy Account balance : $" << Piggy.Balance() << endl;
	cout << "With drawing $4200.00 from the Hogg Account : \n";
	Hoggy.Withdraw(4200.00);
	Hoggy.ViewAcct();

	return 0;

}
