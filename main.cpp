
#include "Diablo.h"
#include <iostream>
using namespace std;

int main() {

	Diablo obj1, obj2;

	obj1.set_color("Rose Gold & Black");
	obj1.set_cubic_capacity(8655);
	obj1.set_seats(4);
	obj1.set_owner_name("Sanna");
	obj1.set_manufacture_year(2007);
	obj1.set_frame_number("88672");
	obj1.set_engine_number("UH765");

	obj2=obj1;

	obj2.set_owner_name("Umar");
	obj2.set_manufacture_year(9832);
	obj2.set_frame_number("89UH");
	obj2.set_engine_number("88HUH");

	cout<<obj2.get_color()<<endl;

	obj2.set_color("Black");

	cout<<obj2.get_color()<<endl;
	cout<<obj1.get_color()<<endl;

	return 0;
}
