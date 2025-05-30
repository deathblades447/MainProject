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
		mark = 4;

	}
	Student(string name,string sname) {
		firstname = name;
		surname = sname;
		age = 0;
		_class = 0;
		gender = 'nb';
		alive = false;
		mark = 4;

	}
	Student(string name, string sname,int a) {
		firstname = name;
		surname = sname;
		age = a;
		_class = 0;
		gender = 'nb';
		alive = false;
		mark = 4;

	}
	Student(string name, string sname, int a,int cl,char g, bool al,
		double m) {
		firstname = name;
		surname = sname;
		age = a;
		_class = cl;
		gender = g;
		alive = al;
		mark = m;

	}

	Student(const Student& student) {
		firstname = student.firstname;
		surname = student.surname;
		age = student.age;
		_class = student._class;
		gender = student.gender;
		alive = student.alive;
		mark = student.mark;
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