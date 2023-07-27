#include <iostream>
#include "Replacement.h"
//#include <cmath>

using namespace std;

class car {

	public: 
	
	
	int make;
	int doors;
	int *color;
	
	car () {
	
		color = new int; //dynamic mem allocation in heap
	
	}
	
	
	car (car &c) { //copy constructor for deep copy. 
	//o1 = o2			this is o1		c  is o2
		
		color = new int;
	
		make = c.make;
		doors = c.doors;
		
		*color = *(c.color);
		
		//cout << "Copy Construct.";
	}
	
	
	
};


int main(){

	car a;

	a.make = 2;
	a.doors = 4;
	*a.color = 30;
	
	cout << a.make << endl;
	cout << *a.color << endl;
	
	//shallow copy. Dynamic mem is not copied. This is default copy operation by C
	car b = a; //It will call copy constructor "IF EXISTS" for deep copy. This will be implemented by the programmer.

	*a.color = 90;

	cout << b.make << endl;
	cout << *b.color << endl;

	cout << endl;


}
