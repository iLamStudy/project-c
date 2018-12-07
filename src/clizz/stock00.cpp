//stock00.cpp --implementing the stock class
//version 00
#include <iostream>
#include "stock00.h"

void Stock::acquire(const std::string & co,long n,double pr) {
	company = co;
	if(n < 0) {
		std::cout << "Number of shares can't be negative: " << company << " shares set 0. \n";
		shares = 0;
	}else {
		shares = n;
	}

	share_val = pr;

	set_total();
}

void Stock::buy(long num,double price) {
	if(num < 0) {
		std::cout << "Number of shares purchansed can't be negative. " 
			<< "Transcation is aborted. \n";
	}else {
		shares += num;
		share_val = price;
		set_total();
	}
}

void Stock::sell (long num,double price) {
	using std::cout;
	
	if(num < 0) {
		cout << "Number of shares sold can't be negative.  "
			<< "Transaction isaborted. \n";
	}else if(num > shares){
		cout << "You can't sell more than you have! "
			<< "Transaction is aborted. \n";
	}else {
		shares -= num;
		share_val = price;
		set_total();
	}
}

void Stock::update(double price) {

	share_val = price;
	set_total();
}

void Stock::show() {
	std::cout << "Company: " << company << " Shares: " << shares << '\n'
		<< " Share Price : $" << share_val << "  Total Worth: $"
		<< total_val << '\n';
}


