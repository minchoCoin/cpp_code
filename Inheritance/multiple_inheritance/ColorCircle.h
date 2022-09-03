#pragma once
#include <iostream>
#include "circle.h"
#include "color.h"

class ColorCircle : public Circle, public Color {
public:
	ColorCircle(int x, int y, int r = 20, int c = Color::BLUE) : Circle(x, y, r), Color(c) {}
	void Info() {
		Circle::Info();
		Color::Info();
	}
	ColorCircle& operator ++() {
		Circle::operator++();
		Color::operator++();
		return *this;
	}
	ColorCircle& operator = (ColorCircle& cc) {
		Circle cirtmp = (Circle)cc;
		Color coltmp = (Color)cc;
		Circle::operator=(cirtmp);
		Color::operator=(coltmp);
		return *this;
	}
	friend std::ostream& operator <<(std::ostream& os, const ColorCircle& cc) {
		os << (Circle)cc;
		os << (Color)cc;
		return os;
	}
};