
#include<iostream>
using namespace std;

#ifndef REMOTE_H_
#define REMOTE_H_

class Remote{

	//this friend class is using all the variables fomr class TV
	TV objTV;

public:
	//default constructor
	Remote(){
		objTV.status=false;
		objTV.channel=0;
		objTV.volume=0;
		objTV.TV_input="AV";
		objTV.tuning_mode = "digital";
	}

	//parameterized constructor
	Remote(bool s , int c, int v, string input , string mode){
	 objTV.status = s;
	 objTV.channel = c;
	 objTV.volume = v;
	 objTV.TV_input=input;
	 objTV.tuning_mode=mode;
	}

	//channel change function
	int change_channel(int channel){
		return objTV.channel = channel;
	}
};

#endif /* REMOTE_H_ */
