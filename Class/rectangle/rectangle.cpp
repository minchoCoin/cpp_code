#include <iostream>
#include "rectangle.h"

Rectangle::Rectangle(int x = 0, int y = 0, int h = 0, int b = 0):x_pos(x),y_pos(x),height(h),base(b) {}
Rectangle::~Rectangle() {}
int Rectangle::Height() { return height; }
int Rectangle::Base() { return base; }
int Rectangle::Perimeter() { return 2 * (height * base); }
int Rectangle::Area() { return height * base; }
bool Rectangle::operator==(const Rectangle& s) {
	return ((x_pos == s.x_pos) && (y_pos == s.y_pos) && (height == s.height) && (base = s.base));
}
bool Rectangle::IsSquare() { return (height == base); };

std::ostream& operator <<(std::ostream& os, const Rectangle& r) {
	os << "position : " << "(" << r.x_pos << " , " << r.y_pos << ")" << std::endl;
	os << "Height : " << r.height << std::endl;
	os << "Base : " << r.base << std::endl;
	return os;
}