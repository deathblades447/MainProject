#include "plane.h"

int main() {
	Plane plane;
	cout << "before: ";
	cout << plane.toString() << endl;
	plane.toString();


	plane.brand = "boeing";
	plane.model = "474-400";
	plane.height = 12;
	plane.width = 120;
	plane.lenght = 100;
	plane.count = 700;
	plane.speed = 1000;
	plane.running = true;

	cout << "after: ";
	plane.toString();

	Plane* ptrPlane = nullptr;
	ptrPlane = new Plane;

	ptrPlane->brand = "boeing";
	ptrPlane->model = "373-100";
	ptrPlane->height = 12;
	ptrPlane->width = 120;
	ptrPlane->lenght = 100;
	ptrPlane->count = 700;
	ptrPlane->speed = 1000;
	ptrPlane->running = true;

	ptrPlane->brand;

	cout << ptrPlane->toString() << endl;
	 
	
	return 0;
}