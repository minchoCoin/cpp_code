#pragma once
#include <iostream>

class Color {
private:
	int color;
public:
	enum{BLACK,RED,BLUE,GREEN,YELLOW,WHITE};
	Color(int c = BLACK) : color(c) {}
	int ColorValue() const { return color; }
	void ColorChange(int c) { color = c; }
	
	Color& operator ++() {
		color = (color + 1) % (WHITE + 1);
		return *this;
	}
	Color& operator =(Color& c) {
		color = c.color;
		return *this;
	}
	void Info() {
		std::cout << "color number is : " << color << std::endl;
	}
	friend std::ostream& operator <<(std::ostream& os, const Color& c) {
		os << "color number is : " << c.color << "\n";
		return os;
	}
};