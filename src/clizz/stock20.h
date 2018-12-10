//stock20.h --agrumented version
#ifndef STOCK20_H_
#define STOCK20_H_
#include <string>
class Stock {
private:
	std::string 	company_;

	int 		shares_;
	double		share_val_;
	double		total_val_;
	void		set_total() {
		total_val_ = shares_ * share_val_;
	}
	
public:
	Stock();
	Stock(const std::string & company,long n = 0,double price = 0.0);
	~Stock(); //the destructor defined

	void buy(long num,double price);
	void sell(long num,double price);
	void update(double price);

	void show() const;

	const Stock & topval(const Stock & s)const;
};
#endif
