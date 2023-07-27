
#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include <math.h>
#include <iostream.h>
//using namespace std;


//Just a class definition ahead. No mem allocation until an object of the class is defined.
class Polynomial

{
    private: 
        double *poly;
        int degree;

    public:

    /*
    Case study:

    poly = { 8, 2, 6, 1, 4 }    degree 2
    poly = { 8, 2, 6, 1, 4 }    degree 2
    +
           { 16, 2, 12, 1, 8 }
    index     0  1   2  3  4            even indexes contains co-efficients, that will indulge in arithemetics


    poly1 = {       8, 2, 6, 1, 4 }    degree 2

    poly2 = { 5, 3, 8, 2, 6, 1, 4 }    degree 3

    +

    result = { }

    skip = |degree - degree| * 2

    1st loop will copy the elements of high degree w/o arithmetics
    loop count = skip


    index1 start: 0
    index2 start: skip

    2nd loop
    loop count = (array size of high degree) - skip

    result[index2] = poly1[index1] + poly2[index2]


    */
   Polynomial() { //Here the functionality for the default constructor 
        
        poly = new double[0];
        degree = 0;

    }


    Polynomial(double *p, int d) { //Here the functionality for the default constructor 
        
        poly = p;
        degree = d;

    }

    Polynomial operator+(Polynomial objAdd) {
        //lhs = this
        //rhs = objAdd

        double *highDegreePoly, *lowDegreePoly;

        int skipIndexes;
        int highDegree;

        if (this->degree == objAdd.degree) {
            highDegreePoly = this->poly;
            lowDegreePoly = objAdd.poly;

            highDegree = this->degree;
            skipIndexes = 0;
        }
        else if (this->degree > objAdd.degree) {
            highDegreePoly = this->poly;
            lowDegreePoly = objAdd.poly;

            highDegree = this->degree;
            skipIndexes = (this->degree - objAdd.degree) * 2;
        }
        else {
            highDegreePoly = objAdd.poly;
            lowDegreePoly = this->poly;

            highDegree = objAdd.degree;
            skipIndexes = (objAdd.degree - this->degree) * 2;
        }

        int resultArraySize = (2 * highDegree) + 1;

        double *resultPoly = new double[resultArraySize];

        //loop 1
        int i,buffer;

        for(i = 0 ; i <skipIndexes ; i++){

            resultPoly[i] = highDegreePoly[i];

        }


        //loop 2

        /*2nd loop
        loop count = (array size of high degree) - skip

        result[index2] = poly1[index1] + poly2[index2]*/

        buffer = skipIndexes;

        for(i = 0; i < (resultArraySize) - skipIndexes ; i++){

            if(i%2 == 0){

                resultPoly[buffer] = highDegreePoly[buffer] + lowDegreePoly[i];
               
            }
            else{
                resultPoly[buffer] = lowDegreePoly[i];}
                                                        
                 buffer++;
        }

        //display result array
        for(i = 0; i < resultArraySize; i++){

            if(i==resultArraySize-1){
                cout<<" "<<resultPoly[i];
            }

            else if(i%2 == 0){

                 cout<<" "<<resultPoly[i]<< "x^";

            }

            else 

                cout<<resultPoly[i]<<" +";
           

           
        }

        Polynomial r(resultPoly, highDegree);

        return r;
    

       

        
    }

        Polynomial operator-(Polynomial objSub) {
        //lhs = this
        //rhs = objAdd

        double *highDegreePoly, *lowDegreePoly;

        int skipIndexes;
        int highDegree;

        if (this->degree == objSub.degree) {
            highDegreePoly = this->poly;
            lowDegreePoly = objSub.poly;

            highDegree = this->degree;
            skipIndexes = 0;
        }
        else if (this->degree > objSub.degree) {
            highDegreePoly = this->poly;
            lowDegreePoly = objSub.poly;

            highDegree = this->degree;
            skipIndexes = (this->degree - objSub.degree) * 2;
        }
        else {
            highDegreePoly = objSub.poly;
            lowDegreePoly = this->poly;

            highDegree = objSub.degree;
            skipIndexes = (objSub.degree - this->degree) * 2;
        }

        int resultArraySize = (2 * highDegree) + 1;

        double *resultPoly = new double[resultArraySize];

        //loop 1
        int i,buffer;

        for(i = 0 ; i <skipIndexes ; i++){

            resultPoly[i] = highDegreePoly[i];

        }


        //loop 2

        /*2nd loop
        loop count = (array size of high degree) - skip

        result[index2] = poly1[index1] + poly2[index2]*/

        buffer = skipIndexes;

        for(i = 0; i < (resultArraySize) - skipIndexes ; i++){

            if(i%2 == 0){

                resultPoly[buffer] = highDegreePoly[buffer] - lowDegreePoly[i];
               
            }
            else{
                resultPoly[buffer] = lowDegreePoly[i];}
                                                        
                 buffer++;
        }

        //display result array
        for(i = 0; i < resultArraySize; i++){

            if(i==resultArraySize-1){
                cout<<" "<<resultPoly[i];
            }

            else if(i%2 == 0){

                 cout<<" "<<resultPoly[i]<< "x^";

            }

            else if(resultPoly[i]>=0){

                cout<<resultPoly[i]<<" +";}

            else

                cout<<resultPoly[i];}
           

           
        }

       // Polynomial r(resultPoly, highDegree);

        //return r;

        Polynomial operator+=(Polynomial objAdd) {
        //lhs = this
        //rhs = objAdd
        Polynomial BrandNew;

        BrandNew = *this + objAdd;

        *this = BrandNew;

        return (BrandNew);
        
        
    } 

     Polynomial operator-=(Polynomial objSub) {
        //lhs = this
        //rhs = objAdd
        Polynomial BrandNew;

        BrandNew = *this - objSub;

        *this = BrandNew;

        return (BrandNew);
        
        
    } 

    Polynomial operator=(Polynomial objEqual) {
        //lhs = this
        //rhs = objAdd
        Polynomial BrandNew;

        *poly = *(objEqual.poly);

        degree = objEqual.degree;

        return (BrandNew);
        
    } 

    bool operator==(const Polynomial &rhs){
    
    if (*poly == *(rhs.poly) ) {
        return true;
    }

    else
        return false;

    //both cond met then return true otherwise false.

}


    friend ostream& operator<< (ostream &out, Polynomial &objPolynomial){

            out << "(" << *(objPolynomial.poly) << ")" ;

            return out;

        }

    friend istream& operator>> (istream &in, Polynomial &objPolynomial){

            in >>*( objPolynomial.poly);

            return in;

        }
    


};
     
      #endif


