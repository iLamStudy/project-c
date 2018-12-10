//stock20.cpp -- argumented version
#include <iostream>
#include "stock20.h"

Stock::Stock() {
	company_ 	= "no company";
	shares_ 	= 0;
	share_val_	= 0.0;
	total_val_	= 0.0;
}

Stock::Stock(const std::string &company,long n,double price){
	company_	= company;
	if(n < 0) {
		std::cout << "Number of can't be negative; "
			<< company_ << " shares set to 0. \n";
		shares_ = 0;
	}else
		shares_ = n;
	share_val_	= price;
	set_total();
}

Stock::~Stock() {
	std::cout << " called destructor." << company_ << '\n';
}

void Stock::buy(long num,double price){
	if(num < 0 ){
		std::cout << "Number of shares purchased can't be negative. "
			<< " Transaction is aborrted . \n";
	}
	else{
		shares_ 	+= num;
		share_val_	= price;
		set_total();
	}
}

void Stock::sell(long num,double price){
	using std::cout;
	if(num < 0){
		cout << "Number of shares sold can't be negative. "
			<< "Transaction is aborted. \n";
	}else if(num > shares_){
		cout << "You can't sell more than you have! "
			<< "Transaction is aborted. \n";
	}else{
		shares_ 	-= num;
		share_val_	= price;
		set_total();
	}
}

void Stock::update(double price){
	share_val_ = price;
	set_total();
}

void Stock::show() const {
	using std::cout;
	using std::ios_base;

	//set format to #.###
	ios_base::fmtflags orig =
		cout.setf(ios_base::fixed,ios_base::floatfield);
	std::streamsize prec = cout.precision(3);

	cout << "Company : " << company_ << " Shares : " << shares_ << '\n';

	cout << "Share Price : $" << share_val_;

	cout.precision(2);

	cout << " Total Price: $" << total_val_ << '\n';

	cout.setf(orig,ios_base::floatfield);
	cout.precision(prec);
}

const Stock & Stock::topval(const Stock &s) const {
	if(s.total_val_ > total_val_)
		return s;
	else
		return *this;
}

