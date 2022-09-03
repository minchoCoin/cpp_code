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
	os << "Height : " << r.Height() << std::endl; //�Ǵ� r.height
	os << "Base : " << r.Base() << std::endl; //�Ǵ� r.base
	return os;
} //const ��ü�� const �Լ��� ȣ�Ⱑ��
//���� const Rectangle& r�� int Rectangle::Height() const {}�� ȣ���� �� ������
//int Rectangle::Height()�� ȣ�� �Ұ���
//const �Լ��� �Լ� ���ο��� ���� ���� �ٲ�� �ȵ�.