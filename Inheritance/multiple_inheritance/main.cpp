#include <iostream>
#include "circle.h"
#include "color.h"
#include "ColorCircle.h"
using namespace std;

int main(void) {
	ColorCircle cc(10, 20, 5, Color::BLUE);
	ColorCircle cc2(20, 30, 15, Color::GREEN);
	ColorCircle cc3(50, 60, 20, Color::RED);

	cc3 = cc2;

	cc2.Info();
	cout << cc2;

	while (cc.Radius() < cc2.Radius()) {
		cc.Info();
		++cc;
	}
	return 0;
}