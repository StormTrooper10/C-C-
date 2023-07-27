
#include <cstring>
#include <iostream>
using namespace std;

#ifndef TV_H_
#define TV_H_


class TV{

	bool status;
	//current channel
	int channel; //max=250 min=0
	//current volume
	int volume; //max=100 min=0
	string TV_input;//AV or cable
	string tuning_mode; //digital or analog

	//friend class for remote control
	friend class Remote;

public:

	//default constructor
	TV();

	//parameterized constructor
	TV(bool, int, int, string, string);

	//getter and setter functions
	void set_status(bool);
	bool get_status();

	void set_channel(int);
	int get_channel();

	void set_volume(int);
	int get_volume();

	void set_TV_input(string);
	string get_TV_input();

	void set_tuning_mode(string);
	string get_tuning_mode();

};


#endif /* TV_H_ */
