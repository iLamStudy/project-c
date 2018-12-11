//nbstime30.h -- overriding class with friends
#ifndef NBSTIME30_H_
#define NBSTIME30_H_
#include <iostream>

class Time {
private:
	int hours;
	int minutes;

public:
	Time();
	Time(int h,int min =0);

	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h=0,int m=0);

	Time operator+(const Time & t) const;
	Time operator-(const Time & t) const;
	Time operator*(double m) const;

	friend Time operator* (double m,const Time & t){
		return t*m; }
	friend std::ostream & operator<< (std::ostream & os,const Time & t);
};
#endif
