#include <iostream>
#include "complex.cpp"
using namespace std;

int main(){

    //class object is defined. Copy constructor is called. Mem allocated for its members.
    ComplexNo a(10,5);  // 10 + 5i
    ComplexNo b(10, 5);  // 20 + 7i
    ComplexNo c;
    ComplexNo d;
    ComplexNo e;
    ComplexNo f;

    c = a + b;
    //   a.+(b)
    d = a - b;
    //   a.- (b)
    e = a * b;

    f = a / b;

    //a += b;

    c.print();  //for addition

    d.print();  //for subtraction

    e.print();  //for multiplication

    f.print();  //for division

    //a.print();

    //int ii;
    //cin>>a;
    
   // a = b;
//cout<<"AAAAA"<<a;
    cout << "|a|=" << a.modulus() << "|b|=" << b.modulus() << endl;

    cout << (a >= b) << endl;

    cout << "Program end." << endl;

}


//  cd "/Users/umargul/Documents/FAST/3rd Semester/OOP/Assignments/Assignment 3/q1"
//  ./complexMain