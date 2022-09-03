#include <iostream>
#include "rectangle.h"

Rectangle::Rectangle(int x = 0, int y = 0, int h = 0, int b = 0):x_pos(x),y_pos(x),height(h),base(b) {}
Rectangle::~Rectangle() {}
int Rectangle::Height() const { return height; }
int Rectangle::Base() const { return base; }
int Rectangle::Perimeter() const { return 2 * (height * base); }
int Rectangle::Area() const{ return height * base; }
bool Rectangle::operator==(const Rectangle& s) {
	return ((x_pos == s.x_pos) && (y_pos == s.y_pos) && (height == s.height) && (base = s.base));
}
bool Rectangle::IsSquare() { return (height == base); };

std::ostream& operator <<(std::ostream& os, const Rectangle& r) {
	os << "position : " << "(" << r.x_pos << " , " << r.y_pos << ")" << std::endl;
	os << "Height : " << r.Height() << std::endl; //또는 r.height
	os << "Base : " << r.Base() << std::endl; //또는 r.base
	return os;
} //const 객체는 const 함수만 호출가능
//따라서 const Rectangle& r은 int Rectangle::Height() const {}는 호출할 수 있지만
//int Rectangle::Height()는 호출 불가능
//const 함수는 함수 내부에서 변수 값이 바뀌면 안됨.