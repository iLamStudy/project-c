//brass.cpp -- bank account class methods
#include <iostream>
#include "brass.h"
using std::cout;
using std::endl;
using std::string;

//formatting stuff
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;

format setFormat();
void restore(format f,precis p);

//Brass methods
Brass::Brass(const std::string & s,long an,double bal) {
	fullname	= s;
	acctNum		= an;
	balance		= bal;
}

void Brass::Deposit(double amt) {
	if(amt < 0)
		cout << "Negative deposit not allowed; "
			<< "deposit is cancelled.\n";
	else
		balance += amt;
}

void Brass::Withdraw(double amt) {
	//set up ###.## format
	format initialState = setFormat();
	precis prec = cout.precision(2);

	if(amt < 0)
		cout << "Withdraw must be positive; "
			<< "withdraw canceled.\n";
	else if (amt <= balance ){
		balance -= amt;
	}else 
		cout << "Withdraw amount of $ " << amt 
			<< " exceeds your balance.\n"
			<< "Withdraw canceled.\n";
	restore(initialState,prec);
}

double Brass::Balance() const {
	return balance;
}

void Brass::ViewAcct() const {
	format initialState = setFormat();
	precis prec = cout.precision(2);

	cout << "Client : " << fullname << endl;
	cout << "Account No: " << acctNum << endl;
	cout << "Balance: $" << balance << endl;
	restore(initialState,prec);
}

//BrassPlus methods
BrassPlus::BrassPlus(const std::string &s,long an,double bal,
		double ml,double r) : Brass(s,an,bal) {
	maxLoan = ml;
	owesBank = 0.0;
	rate = r;
}

BrassPlus::BrassPlus(const Brass &ba,double ml,double r) 
	: Brass(ba) {
	maxLoan		= m;
	owesBank	= 0.0;
	rate		= r;
}

void BrassPlus::ViewAcct() const {
	format initialState = setFormat();
	precis prec = cout.precision(2);
	
	Brass::ViewAcct();

	cout << "Maximum loan: $" << maxLoan << endl;

	cout << "Owes to Bank: $" << owesBank << endl;
	cout.precision(3);
	cout << "Loan Rate : " << 100 * rate << "%\n";

	restore(initialState,prec);
}

void BrassPlus::Withdraw(double amt) {
	format initialState = setFormat();
	precis prec = cout.precision(2);
	
	double bal = Balance();

	if(amt <= bal)
		Brass::Withdraw(amt);
	else if(amt <= bal + maxLoan - owesBank ){
		double advance = amt -bal;
		owesBank += advance * (1.0 + rate);

		cout << "Bank advance: $ " << advance << endl;
		cout << "Finance charge: $" << advance * (1.0 + rate) << endl;

		Deposit(advance);
		Brass::Withdraw(amt);
	}else
		cout << "Credit limit exceeded. Transaction canceled.\n";
	
	restore(initialState,prec);
}

format setFormat() {
	return cout.setf(std::ios_base::fixed,
			std::ios_base::floatfield);
}

void restore(format f, precis p) {
	cout.setf(f,std::ios_base::floatfield);
	cout.precision(p);
}
