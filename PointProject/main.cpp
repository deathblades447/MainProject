#include "Point.h"

int main() {
	Point2D point1;

	cout << "input x and y: ";
	cin >> point1.x >> point1.y;

	cout << "point is in" << point1.getQuarter() << ".\n";

	system("pause");

	return 0;

}