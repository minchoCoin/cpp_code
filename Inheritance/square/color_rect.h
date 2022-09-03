#pragma once
#include <iostream>
#include "rectangle.h"

class ColorRect : public Rectangle {
private:
	int color;
public:
	ColorRect(int h, int b, int c = 4, int x = 0, int y = 0) : Rectangle(h, b, x, y), color(c) {}
	void Color(int c);
	int Color() const;

};
void ColorRect::Color(int c) { color = c; }
int ColorRect::Color() const{ return color; }

std::ostream& operator <<(std::ostream& os, const ColorRect& c) {
	os << (Rectangle)c;
	os << "Color : " << c.Color() << "\n";
	return os;
}