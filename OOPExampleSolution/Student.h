#pragma once
#include "main.h"

class Student {
public:
	string firstname;
	string surname;
	int age;
	int _class;
	double mark;
	char gender;
	bool alive;

	string toString() {
		string s = firstname;
		s += " " + surname;
		s += ", age =" + to_string(age);
		s += ", class =" + to_string(_class);
		s += ", gender =" + to_string(gender);
		s += ", is alive -";
		s += (alive ? "yes" : "no");
		s += ", average mark =" + to_string(mark);
		return s;
	}

};