#include <iostream>
#include "rectangle.h"
using namespace std;

int main(void) {
	Rectangle a(2, 3, 5, 6), b(2, 3, 5, 5);
	Rectangle* c = &b;
	cout << a << b;
	cout << "----------\n";
	if (a.Area() > b.Area()) cout << a;
	else cout << b;
	cout << a.IsSquare() << b.IsSquare();
	return 0;
}
