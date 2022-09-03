#pragma once
#include <iostream>
class Circle {
private:
	int X_center;
	int Y_center;
	int radius;
public:
	Circle(int x, int y, int r = 1) : X_center(x), Y_center(y), radius(r) {}
	void Center(int x, int y) {
		X_center = x;
		Y_center = y;
	}
	void Radius(int r) {
		radius = r;
	}

	int Radius() const { return radius; }
	int XCenter() const { return X_center; }
	int YCenter() const { return Y_center; }
	void Info() {
		std::cout << "Circle in ( " << X_center << "," << Y_center << "), radius is " << radius << std::endl;
	}
	Circle& operator ++() {
		radius++;
		X_center++;
		Y_center++;
		return *this;
	}
	Circle& operator =(Circle& c) {
		X_center = c.X_center;
		Y_center = c.Y_center;
		radius = c.radius;
		return *this;
	}
	friend std::ostream& operator <<(std::ostream& os, const Circle& c) {
		os << "Circle in ( " << c.X_center << "," << c.Y_center << "), radius is " << c.radius << "\n";
		return os;
	}
};