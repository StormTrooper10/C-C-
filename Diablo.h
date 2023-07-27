#include <iostream>
#include <string>
using namespace std;

#ifndef DIABLO_H_
#define DIABLO_H_

class Diablo{

	string color;
	int cubic_capacity;
	int seats;
	int manufacture_year;
	string engine_number;
	string frame_number;
	string owner_name;

public:
	//default constructor
	Diablo(){
		color="\0";
		cubic_capacity=0;
		seats=0;
		manufacture_year=0;
		engine_number=0;
		frame_number=0;
		owner_name="\0";
	}
	//parameterized constructor
	Diablo(string c1, int c2, int s, int my, int en, int fm, string on){
			color=c1;
			cubic_capacity=c2;
			seats=s;
			manufacture_year=my;
			engine_number=en;
			frame_number=fm;
			owner_name=on;
		}

	//getter setter functions

	void set_color(string c){
		color=c;
	}
	string get_color(){
			return color;
	}

	void set_cubic_capacity(int cc){
		cubic_capacity=cc;
	}
	int get_cubic_capacity(){
			return cubic_capacity;
	}


	void set_seats(int s){
		seats=s;
	}
	int get_seats(){
			return seats;
	}

	void set_manufacture_year(int y){
		manufacture_year=y;
	}
	int get_manufacture_year(){
			return manufacture_year;
	}

	void set_engine_number(string en){
		engine_number=en;
	}
	string get_engine_number(){
			return engine_number;
	}

	void set_frame_number(string fm){
		frame_number = fm;
	}
	string get_frame_number(){
			return frame_number;
	}

	void set_owner_name(string on){
		owner_name = on;
	}
	string get_owner_name(){
			return owner_name;
	}


	Diablo (Diablo &obj){
		color = obj.color;
		cubic_capacity = obj.cubic_capacity;
		seats = obj.seats;
	}
};

#endif /* DIABLO_H_ */
