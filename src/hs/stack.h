//stack.h -- class definition for the stack ADT
#ifndef STACK_H_
#define STACK_H_
typedef unsigned long Item;

class Stack {
private :
	enum { MAX =10 };		//constant specific to class

	Item items[MAX];		//holds stack items

	int top;			//index for top stack item

public :
	Stack();

	bool isempty() const;
	bool isfull() const;

	//add Item to stack
	bool push(const Item & item);

	//pop Item form stack
	bool pop(Item & item);
};
#endif
