#include <cmath>
#include <iostream>
#include "IntType.h"
using namespace std;

IntType::IntType()
	{
		num = 0;
	}
	//parameterized constructor
IntType::IntType(int n)
	{
		num = n;
	}
void IntType::setNum(int x)
	{
		num = x;
	}

	int IntType::getNum() const
	{
		return num;
	}

	int IntType::numLength() {
	
		int digit, length = 0;
		while (num != 0)
		{
			digit = num % 10;
			
			length++;
			
			num = num / 10;
		}
		return length;
		
		// return lengthof(num)
	}
	bool IntType::palindrome() {
	
		int reverse = 0, digit;
		while (num != 0)
		{
			digit = num % 10;
			reverse = (reverse * 10) + digit;
			num = num / 10;
		}
		if (num == reverse)
			return true;
		else
			return false;

	}
	int IntType::count_evens() {
		
		int digit, count = 0;
		while (num != 0)
		{
			digit = num % 10;
			if (digit % 2 == 0)
			{
				count++;
			}
			num = num / 10;
		}
		return count;
	}
	int IntType::count_odds() {

		int digit, count = 0;
		while (num != 0)
		{
			digit = num % 10;
			if (digit % 2 != 0)
			{
				count++;
			}
			num = num / 10;
		}
		return count;
	}
	int IntType::mid_digit() {
	
		int middigit;
		int digits; //= log10(num) + 1; //size of number
		//finding middle digit
		middigit = (int)(num / pow(10, digits / 2)) % 10;

		return middigit;

	}
	int IntType::max_digit() {
		int max_digit = 0, remainder = 0;
		while (num > 0)
		{
			remainder = num % 10;
			if (max_digit < remainder)
				max_digit = remainder;

			num = num / 10;

		}
		return max_digit;

	}
	int IntType::min_digit() {

		int min_digit = 9999, remainder = 0;
		while (num > 0)
		{
			remainder = num % 10;
			if (min_digit > remainder)
				min_digit = remainder;

			num = num / 10;

		}
		return min_digit;
	}







int numLengthDifference(IntType& num1, IntType& num2)
{
	int diff = 0;
	diff = num1.numLength() - num2.numLength();
	return diff;
	
}
int add(IntType& num1, IntType& num2)
{
	int sum = 0;
	sum = num1.getNum() + num2.getNum();
	return sum;
}
int sub(IntType& num1, IntType& num2)
{
	int sub = 0;
	sub = num1.getNum() - num2.getNum();
	return sub;
}
int multiply(IntType& num1, IntType& num2)
{
	int mul = 0;
	mul = num1.getNum() * num2.getNum();
	return mul;
}
int divide(IntType& num1, IntType& num2)
{
	int div = 0;
	div = num1.getNum() / num2.getNum();
	return div;
}

int main()
{
	IntType obj1,obj2;
	￼￼
	
	//int num1,num2;
	
	
	obj1.setNum(12);
	obj2.setNum(6);
	
	int diff = numLengthDifference(obj1, obj2);
	cout << "Difference is: " << diff << endl;
	int sum = add(obj1, obj2);
	cout << "Sum is: " << diff << endl;
	int subtr = sub(obj1, obj2);
	cout << "Subtraction Result is: " << diff << endl;
	int mul = multiply(obj1, obj2);
	cout << "Product is: " << diff << endl;
	int div = divide(obj1, obj2);
	cout << "Division result is: " << diff << endl;

}
