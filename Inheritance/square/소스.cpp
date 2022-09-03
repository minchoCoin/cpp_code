#include <iostream>
#include "rectangle.h"
#include "square.h"
#include "color_rect.h"

using namespace std;

int main(void) {

	//Square
	int side;
	cin >> side;
	Square sq(side, 0, 0);
	cout << sq;

	//color_rect
	ColorRect c(10, 15, 3, 1, 2);
	cout << c;
	c.Color(10);
	cout << c;
	return 0;
}