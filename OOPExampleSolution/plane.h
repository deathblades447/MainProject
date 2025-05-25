#include "main.h"



class Plane {
public:
	int n;
	string brand;
	string model;
	double width;
	double lenght;
	double height;
	int speed;
	int count;
	bool running;

	string toString() {
		string s = "";
		s += brand + " " + model;
		s += "(width = " + to_string(width);
		s += ",height= " + to_string(height);
		s += ",lenght= " + to_string(lenght);
		s += ",speed= " + to_string(speed);
		s += ",count of passangers = " + to_string(count);
		s += ", ";
		s += (running ? "working" : "repairing");
		return s;
	}


};