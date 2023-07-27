#ifndef COMPLEX_CPP
#define COMPLEX_CPP

#include "complex.h"

//Just a class definition ahead. No memory allocation until an object of the class is defined.

ComplexNo::ComplexNo(double real, double imaginary){

    realNo = real;
    imaginaryNo = imaginary;
    
}

ComplexNo ComplexNo::operator+(ComplexNo objAdd){

    ComplexNo brandNew;
    
    brandNew.realNo = this->realNo  + objAdd.realNo;
    brandNew.imaginaryNo = this->imaginaryNo + objAdd.imaginaryNo;

    return (brandNew);

}

ComplexNo ComplexNo::operator+=(ComplexNo objAdd){

    ComplexNo brandNew;

    brandNew = *this + objAdd;
    
    *this = brandNew;


    return (brandNew);

}

ComplexNo ComplexNo::operator-=(ComplexNo objSub){

    ComplexNo brandNew;

    brandNew = *this - objSub;
    
    *this = brandNew;

    return (brandNew);

}

ComplexNo ComplexNo::operator*=(ComplexNo objMul){

    ComplexNo brandNew;

    brandNew = *this * objMul;
    
    *this = brandNew;

    return (brandNew);

}

ComplexNo ComplexNo::operator/=(ComplexNo objDiv){

    ComplexNo brandNew;

    brandNew = *this / objDiv;
    
    *this = brandNew;

    return (brandNew);

}

ComplexNo ComplexNo::operator=(ComplexNo objEq){

    ComplexNo brandNew;

    realNo = objEq.realNo;
    imaginaryNo = objEq.imaginaryNo;
    
    //*this = brandNew;

    return (brandNew);

}

ComplexNo ComplexNo::operator-(ComplexNo objMinus){

    ComplexNo brandNew;

    brandNew.realNo = this->realNo  - objMinus.realNo;
    brandNew.imaginaryNo = this->imaginaryNo - objMinus.imaginaryNo;

    return (brandNew);

}

ComplexNo ComplexNo::operator*(ComplexNo objMul){
    //(a + bi) * (c + di) = (ac – bd) + (ad + bc) i

    ComplexNo brandNew;

    brandNew.realNo = this->realNo  * objMul.realNo - this->imaginaryNo * objMul.imaginaryNo;
    brandNew.imaginaryNo = this->realNo * objMul.imaginaryNo + this->imaginaryNo * objMul.realNo;

    return (brandNew);

}

ComplexNo ComplexNo::operator/(ComplexNo objDiv){

    //(a + bi) / (c + di) = [(ac + bd) + (bc – ad) i] / (c2 + d2)

    /*
    RHS
    [(ac + bd) + (bc – ad) i] / (c2 + d2)
    = (ac + bd) / (c2 + d2)      +      (bc – ad) / (c2 + d2) i
    
    */

    ComplexNo brandNew;

    brandNew.realNo = (this->realNo * objDiv.realNo + this->imaginaryNo * objDiv.imaginaryNo)
                        / (objDiv.realNo*objDiv.realNo + objDiv.imaginaryNo*objDiv.imaginaryNo);

    brandNew.imaginaryNo = (this->imaginaryNo * objDiv.realNo - this->realNo * objDiv.imaginaryNo)
                            / (objDiv.realNo*objDiv.realNo + objDiv.imaginaryNo*objDiv.imaginaryNo);  ;
                            

    return (brandNew);

}

bool ComplexNo::operator== (const ComplexNo &rhs){
    
    if (this->realNo == rhs.realNo && this->imaginaryNo== rhs.imaginaryNo){
        return true;
    }

    else
        return false;

    //both cond met then return true otherwise false.

}

bool ComplexNo::operator!= (const ComplexNo &rhs){
    
    if (this->realNo != rhs.realNo && this->imaginaryNo != rhs.imaginaryNo){
        return true;
    }

    else
        return false;

    //both cond met then return true otherwise false.

}


void ComplexNo::print() {
    if( imaginaryNo > 0) {

            cout << realNo << " + " << imaginaryNo << "i" << endl;

    }
    else if( imaginaryNo < 0 ){
        cout << realNo<< " " << imaginaryNo << "i" << endl;
    }
    
}

ostream& operator<< (ostream &out, ComplexNo &objComplexNo){

            out << "(" << objComplexNo.realNo << " + " << objComplexNo.imaginaryNo << "i)" ;

            return out;

        }

istream& operator>> (istream &in, ComplexNo &objComplexNo){

            in >> objComplexNo.realNo;
            in >> objComplexNo.imaginaryNo;

            return in;

}

 bool ComplexNo::operator> (ComplexNo &rhs) {

        if ( this->modulus() > rhs.modulus() ) 
            return true;
        else 
            return false;

    }

    bool ComplexNo::operator<(ComplexNo &rhs) {

        if ( this->modulus() < rhs.modulus() ) 
            return true;
        else 
            return false;

    }

    bool ComplexNo:: operator<=(ComplexNo &rhs) {

        if ( this->modulus() <= rhs.modulus() ) 
            return true;
        else 
            return false;

    }

     bool ComplexNo:: operator>=(ComplexNo &rhs) {

        if ( this->modulus() >= rhs.modulus() ) 
            return true;
        else 
            return false;

    }

     double ComplexNo:: modulus() {

        //The modulus of a complex no is the square root of the sum of the squares of the real part and the imaginary part of the complex number.

        return sqrt((this->realNo * this->realNo) + (this->imaginaryNo * this->imaginaryNo));
    
    }


#endif
