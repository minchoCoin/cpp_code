#include <iostream>
using namespace std;

class Rectangle {
private:
	int height;
	int base;
public:
	Rectangle(int h = 0, int b = 0) : height(h), base(b) {}
	~Rectangle() {};
	int Height() const { return height; }
	int Base() const { return base; }
	int Area() const { return height * base; }
	int perimeter() const { return 2 * (height + base); }

	int operator > (const Rectangle r);
	int operator < (const Rectangle r);
	Rectangle& operator ++();
	Rectangle operator ++(int);
	Rectangle& operator = (const Rectangle& r);
	Rectangle(const Rectangle& r);

	friend ostream& operator <<(ostream& os, const Rectangle& r) {
		os << r.height << r.base << endl;
	}
	friend istream& operator >>(istream& is, Rectangle& r) {
		is >> r.height >> r.base;
	}

};
int Rectangle::operator >(const Rectangle r) {
	return this->Area() > r.Area();
}
int Rectangle::operator <(const Rectangle r) {
	return this->Area() < r.Area();
}
Rectangle& Rectangle::operator++() {
	height++;
	base++;
	return *this;
}
Rectangle Rectangle:: operator ++(int) {
	Rectangle tmp = *this;
	height++;
	base++;
	return tmp;
}
Rectangle& Rectangle::operator = (const Rectangle& r) {
	height = r.height; //height = r.Height();
	base = r.base; //base = r.Base();

	return *this;
}
Rectangle::Rectangle(const Rectangle& r) {
	height = r.height;
	base = r.base;
}
int main(void) {
	Rectangle r1(3, 4);
	Rectangle r2 = r1;
	Rectangle r3(1, 2);
	r3 = r1;
	r1++;
	++r1;
	r1 < r2;
	r2 > r3;
	cout << r1;
	cin >> r1;
	return 0;
}