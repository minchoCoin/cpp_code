#pragma once
#include <iostream>
#include <cmath>
#include "rectangle.h"

class Square : public Rectangle {
public:
	Square(int side, int x_pos = 0, int y_pos = 0) : Rectangle(side, side, x_pos, y_pos) {}

	int Perimeter() const {
		return this->Base() * 4;
		//base*4 ดย error
	}
	float Diagonal() const {
		return (float)(this->Base() * sqrt(2));
	}
};
std:: ostream& operator <<(std::ostream& os, const Square sq) {
	os << "base : " << sq.Base() << ", Height : " << sq.Height() << ", Perimeter : " << sq.Perimeter() << ", Area : " << sq.Area() << "\n";
	return os;
}