#pragma once
#include <iostream>
class Rectangle {
public:
	Rectangle(int x, int y, int h, int b);
	~Rectangle();
	int Height();
	int Base();
	int Perimeter();
	int Area();
	bool operator==(const Rectangle& s);
	bool IsSquare();
	friend std::ostream& operator <<(std::ostream& os, const Rectangle& r);

private:
	int x_pos, y_pos, height, base;
};