#include <iostream>
#include "starter.h"

using namespace std;

int main()
{
	//create a few starter objects
	Starter_Object obj1;
	Starter_Object obj2;

	//add some values to test out your values methods
	obj1.val1(10);
	obj1.val2(20);
	obj2.val1(30);
	obj2.val2(40);

	//print out all the values for each object to validate your code
	cout << "tnt0048-hw1" << endl;
	cout << "obj1: " << obj1.val1() << " " << obj1.val2() << endl;
	cout << "obj2: " << obj2.val1() << " " << obj2.val2() << endl;

	return 0;
}
