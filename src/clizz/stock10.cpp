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

//TODO
