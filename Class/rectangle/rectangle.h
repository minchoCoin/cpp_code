#pragma once
#include <iostream>
class Rectangle {
public:
	Rectangle(int x, int y, int h, int b);
	~Rectangle();
	int Height() const; 
	int Base() const;
	int Perimeter() const;
	int Area() const;
	bool operator==(const Rectangle& s);
	bool IsSquare();
	friend std::ostream& operator <<(std::ostream& os, const Rectangle& r);

private:
	int x_pos, y_pos, height, base;
};