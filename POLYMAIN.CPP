#include <iostream.h>
//using namespace std;
#include "poly.cpp"


int main(){

    double s[5] = {8,2,6,1,4};
    double t[5] = {8,2,6,1,4};

    Polynomial p(s,2);
    Polynomial q(t,2);
    Polynomial r;



   // r=p+q;

   // r= p-q;

   //p+=q;

   //cout<<(p == q);

    p = q;

    for(int i = 0 ; i < 5 ; i++){

         cin>>p;

    }
    for(int i = 0 ; i < 5 ; i++){

         cout<<p<<endl;
         
    }

    //cout<<p<<endl;

    cout<<"Program end"<<endl;




}



