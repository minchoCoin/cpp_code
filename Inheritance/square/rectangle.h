#pragma once
#include <iostream>
class Rectangle {
private:
	int base;
	int height;
	int x_pos;
	int y_pos;
public:
	Rectangle(int h, int b, int x = 0, int y = 0) : height(h), base(b), x_pos(x), y_pos(y) {}
	int Base() const { return base; }
	int Height() const { return height; }
	int Perimeter() const { return 2 * (base + height); }
	int Area() const { return base * height; }
	void Moves(int delta_x, int delta_y);
	void Scale(int scale);
};
void Rectangle::Moves(int delta_x, int delta_y) {
	x_pos += delta_x;
	y_pos += delta_y;
}
void Rectangle::Scale(int scale) {
	base *= scale;
	height *= scale;
}

std::ostream& operator <<(std::ostream& os, const Rectangle r) {
	os << "base : " << r.Base() << ", Height : " << r.Height() << ", Perimeter : " << r.Perimeter() << ", Area : " << r.Area() << "\n";
	return os;
}