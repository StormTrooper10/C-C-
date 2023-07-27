#include <cmath>
#ifndef INTTYPE_H_
#define INTTYPE_H_


class IntType
{

private:

	int num;

public:
	//defualt constructor
	IntType();
	
	//parameterized constructor
	IntType(int n);
	
	void setNum(int x);
	
	int getNum() const;
	

	int numLength() ;
	bool palindrome() ;
	int count_evens() ;
	int count_odds() ;
	int mid_digit() ;
	int max_digit() ;
	int min_digit() ;


};
#endif //INTTYPE_H

