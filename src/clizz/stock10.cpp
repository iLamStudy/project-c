//stock10.cpp --stock class declaration with constructors,destructor added
#include <iostream>
#include "stock10.h"

//constructors (verbose version)
Stock::Stock() {//default constructor
	std::cout << "Default consructor call \n";
	company_ = "no name";
	shares_ = 0;
	share_val_ = 0.0;
	total_val_ = 0.0;
}

//
Stock::Stock(const std::string &company,long n,double price) {
	std::cout << "Constructor using " << company << " called \n";
	company_ = company;

	if(n <0) {
		std::cout << "Number of shares can't be negative; "
			<< company << " shares set to 0 . \n";
		shares_ = 0;
	}else {
		shares_ = n;
	}

	share_val_ = price;

	set_total();
}

//class destructor 
Stock::~Stock() {
	std::cout << "Bye, " << company_ << "! \n";
}

void Stock::buy (long num,double price) {
	if(num < 0 ) {
		std::cout << "Number of shares purchased can't be negative. "
			<< "Transaction is aborted, \n";
	}else {
		shares_ += num;
		share_val_ = price;
		set_total();
	}
}

void Stock::sell(long num,double price) {
	using std::cout;

	if(num < 0 ) {
		cout << "Number of shares sold can't be negative. "
			<< "Transaction is aborted. \n";
	}else {
		shares_ -= num;
		share_val_ = price;
		set_total();
	}
}

void Stock::update(double price) {
	share_val_ = price;
	set_total();
}

void Stock::show() {
	using std::cout;
	using std::ios_base;

	//set format to #.###
	ios_base::fmtflags orig = 
		cout.setf(ios_base::fixed , ios_base::floatfield);

	std::streamsize prec = cout.precision(3);

	cout << "Company: " << company_ << " Shares : " << shares_ << '\n';

	cout << " Share Price : $" << share_val_;

	//set format to #.##
	cout.precision(2);
	cout << " Total Worth: $" << total_val_ << '\n';

	//restore original format
	cout.setf(orig,ios_base::floatfield);
	cout.precision(prec);
}


