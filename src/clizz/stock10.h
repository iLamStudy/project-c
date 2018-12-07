//stock10.h --Stock class declaration with constructions ,destructor added
#ifndef STOCK10_H_
#define STOCK10_H_
#include <string>

class Stock {
	
private:
	std::string 	company_;
	long		shares_;
	double		share_val_;
	double		total_val_;
	void		set_total() {
		total_val_ = shares_ * share_val_;
	}
public:
	Stock();//default constructor
	Stock(const std::string & company,long shares = 0,double price = 0.0);
	~Stock(); //noisy destructor
	
	void buy(long num,double price);
	void sell(long num,double price);
	void update(double price);

	void show();
};

#endif
