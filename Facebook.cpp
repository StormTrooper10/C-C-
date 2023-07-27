



/*#include "Facebook.h"

#include<iostream>
//#include<string>
using namespace std;

Facebook::Facebook(){
	gender = 'n';
}

Facebook::Facebook(char n[], char e[], char g){
	for(int i=0; i<6; i++)
	{
		name[i] = n[i];

	}

	for(int i=0; i<10; i++)
		{
			email[i] = e[i];

		}


	gender = g;

}


void Facebook::setname(char n[])
{
	for(int i=0; i<6; i++)
		{
			name[i] = n[i];

		}

}

void Facebook::setemail(char e[])
{
	for(int i=0; i<10; i++)
		{
		email[i] = e[i];


		}

}

void Facebook::setgender(char g)
{
	gender = g;

}

void Facebook::updatenumber(char arr[])
{
	for(int i=0; i<11; i++)
	{
		array[i]= arr[i];

	}

}

void Facebook::getname(){
for(int i=0; i<6; i++)
cout<<name[i];


}

void Facebook::getemail(){
	for(int i=0; i<10; i++)
	cout<<email[i];


	}


}
char Facebook ::getgender()
{

	return gender;
}
void Facebook:: checkcompany()
{



if((array[0] == 0 && array[1]== 3 && array[2] == 0 && array[3]== 0) || (array[0] == 0 && array[1]== 3 && array[2] == 0 && array[3]== 1) || (array[0] == 0 && array[1]== 3 && array[2] == 0 && array[3]== 2) || (array[0] == 0 && array[1]== 3 && array[2] == 0 && array[3]== 3) || (array[0] == 0 && array[1]== 3 && array[2] == 0 && array[3]== 4) || (array[0] == 0 && array[1]== 3 && array[2] == 0 && array[3]== 5) || (array[0] == 0 && array[1]== 3 && array[2] == 0 && array[3]== 6) || (array[0] == 0 && array[1]== 3 && array[2] == 0 && array[3]== 7) || (array[0] == 0 && array[1]== 3 && array[2] == 0 && array[3]== 8) || (array[0] == 0 && array[1]== 3 && array[2] == 0 && array[3]== 9) )
		{
			cout<<"Company is jazz\n";

		}

else if((array[0] == 0 && array[1]== 3 && array[2] == 1 && array[3]== 0) || (array[0] == 0 && array[1]== 3 && array[2] == 1 && array[3]== 1) || (array[0] == 0 && array[1]== 3 && array[2] == 1 && array[3]== 2) || (array[0] == 0 && array[1]== 3 && array[2] == 1 && array[3]== 3) || (array[0] == 0 && array[1]== 3 && array[2] == 1 && array[3]== 4) || (array[0] == 0 && array[1]== 3 && array[2] == 1 && array[3]== 5) || (array[0] == 0 && array[1]== 3 && array[2] == 1 && array[3]== 6) || (array[0] == 0 && array[1]== 3 && array[2] == 1 && array[3]== 7) || (array[0] == 0 && array[1]== 3 && array[2] == 1 && array[3]== 8) || (array[0] == 0 && array[1]== 3 && array[2] == 1 && array[3]== 9) )
{
	cout<<"Company is Zong\n";

}

else if((array[0] == 0 && array[1]== 3 && array[2] == 2 && array[3]== 0) || (array[0] == 0 && array[1]== 3 && array[2] == 2 && array[3]== 1) || (array[0] == 0 && array[1]== 3 && array[2] == 2 && array[3]== 2) || (array[0] == 0 && array[1]== 3 && array[2] == 2 && array[3]== 3) || (array[0] == 0 && array[1]== 3 && array[2] == 2 && array[3]== 4) || (array[0] == 0 && array[1]== 3 && array[2] == 2 && array[3]== 5) || (array[0] == 0 && array[1]== 3 && array[2] == 2 && array[3]== 6) || (array[0] == 0 && array[1]== 3 && array[2] == 2 && array[3]== 7) || (array[0] == 0 && array[1]== 3 && array[2] == 2 && array[3]== 8) || (array[0] == 0 && array[1]== 3 && array[2] == 2 && array[3]== 9) )
{
	cout<<"Company is Warid\n";

}
else if((array[0] == 0 && array[1]== 3 && array[2] == 3 && array[3]== 0) || (array[0] == 0 && array[1]== 3 && array[2] == 3 && array[3]== 1) || (array[0] == 0 && array[1]== 3 && array[2] == 3 && array[3]== 2) || (array[0] == 0 && array[1]== 3 && array[2] == 3 && array[3]== 3) || (array[0] == 0 && array[1]== 3 && array[2] == 3 && array[3]== 4) || (array[0] == 0 && array[1]== 3 && array[2] == 3 && array[3]== 5) || (array[0] == 0 && array[1]== 3 && array[2] == 3 && array[3]== 6) || (array[0] == 0 && array[1]== 3 && array[2] == 3 && array[3]== 7) || (array[0] == 0 && array[1]== 3 && array[2] == 3 && array[3]== 8) || (array[0] == 0 && array[1]== 3 && array[2] == 3 && array[3]== 9) )
{
	cout<<"Company is Ufone\n";

}

else if((array[0] == 0 && array[1]== 3 && array[2] == 4 && array[3]== 0) || (array[0] == 0 && array[1]== 3 && array[2] == 4 && array[3]== 1) || (array[0] == 0 && array[1]== 3 && array[2] == 4 && array[3]== 2) || (array[0] == 0 && array[1]== 3 && array[2] == 4 && array[3]== 3) || (array[0] == 0 && array[1]== 3 && array[2] == 4 && array[3]== 4) || (array[0] == 0 && array[1]== 3 && array[2] == 4 && array[3]== 5) || (array[0] == 0 && array[1]== 3 && array[2] == 4 && array[3]== 6) || (array[0] == 0 && array[1]== 3 && array[2] == 4 && array[3]== 7) || (array[0] == 0 && array[1]== 3 && array[2] == 4 && array[3]== 8) || (array[0] == 0 && array[1]== 3 && array[2] == 4 && array[3]== 9) )
{
	cout<<"Company is Telenor\n";

}


}*/




#include "FaceBook.h"

#include<iostream>
//#include<string>
using namespace std;

FaceBook::FaceBook(){
	name ="Umar";
	email="gulomer10@ymail.com";
	gender="m";
}

FaceBook::FaceBook(string a,string b,string c){
	name=a;
	email=b;
			gender=c;

}


void FaceBook::setname(string n)
{
	name =n;

}











