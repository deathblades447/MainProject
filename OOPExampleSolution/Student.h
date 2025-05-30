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

	Student() {
		firstname = "no name";
		surname = "no surname";
		age = 0;
		_class = 0;
		gender = 'nb';
		alive = false;
		mark = 0;

	}

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