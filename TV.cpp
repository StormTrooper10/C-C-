
#include<iostream>
#include<cstring>
using namespace std;
#include "TV.h"

void TV:: set_status(bool s){
	this->status=s;
}
bool TV:: get_status(){
	return status;
}


void TV:: set_channel(int c){
	while(c<=-1 && c>=251){
		cout<<"Out of range. Retry"<<endl;
		cin>> c;
	}
	this->channel=c;
}
int TV:: get_channel(){
	return channel;
}

void TV:: set_volume(int v){

	while(v<=-1 && v>=101){
			cout<<"Out of range. Retry"<<endl;
			cin>> v;
		}
		this->volume=v;
}
int TV:: get_volume(){
	return volume;
}


void TV:: set_TV_input(string in){
	//AV or cable
	while(in!= "AV" || in!="cable"){
		cout<<"Invalid option. Try again."<<endl;
		getline(cin, in);
	}
	TV_input=in;
}
string TV:: get_TV_input(){
	//AV or cable
	return TV_input;
}

void TV:: set_tuning_mode(string mode){
	//digital or analog
	while(mode!= "digital" || mode!="analog"){
			cout<<"Invalid option. Try again."<<endl;
			getline(cin, mode);
	}
	tuning_mode=mode;
}
string TV:: get_tuning_mode(){
	return tuning_mode;
}


//default constructor
TV::TV(){

	status = false;
	channel = 0;
	volume = 0;
	TV_input= "AV";
	tuning_mode = "digital";
}

//parameterized constructor
TV::TV(bool s , int c, int v, string input , string mode){

	this->status = s;
	this->channel = c;
	this->volume = v;
	this->TV_input=input;
	this->tuning_mode=mode;
}





