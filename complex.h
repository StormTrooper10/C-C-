#ifndef COMPLEX_H
#define COMPLEX_H
#include <cmath>
#include <iostream>
using namespace std;


//Just a class definition ahead. No mem allocation until an object of the class is defined.
class ComplexNo 

{
    private: 
        double realNo;
        double imaginaryNo;

        /*
        (a + bi) – (c + di) = (a – c) + (b – d) i
        LHS
        = a + bi - c - di
        = 5 + 3i - 7 - 4i
        = 5 - 7 + 3i - 4i
        = -2 - i
        */

    public:

    ComplexNo() { //Here the functionality for the default constructor 
            realNo = 0;
            imaginaryNo = 0;
        }

    ComplexNo(double real, double imaginary);

    double modulus();

    ComplexNo operator+(ComplexNo objAdd);
    ComplexNo operator+=(ComplexNo objAdd);
    ComplexNo operator-=(ComplexNo objSub);
    ComplexNo operator*=(ComplexNo objMul);
    ComplexNo operator/=(ComplexNo objDiv);
    ComplexNo operator=(ComplexNo objEq);
    ComplexNo operator-(ComplexNo objMinus);
    ComplexNo operator*(ComplexNo objMul);
    ComplexNo operator/(ComplexNo objDiv);
    friend ostream& operator<< (ostream &out, ComplexNo &objComplexNo);
    friend istream& operator>> (istream &in, ComplexNo &objComplexNo);
    bool operator== (const ComplexNo &rhs);
    bool operator!= (const ComplexNo &rhs);

    bool operator> (ComplexNo &rhs);

    bool operator<(ComplexNo &rhs); 
    bool operator<=(ComplexNo &rhs);
    bool operator>=(ComplexNo &rhs);


    

    void print();
};
#endif
