#include <iostream>
#include "Letters.h"

Letters::Letters(char c) : ch(c) {
	num++;
	std::cout << "New letter " << c << ", the total number is " << num << std::endl;
}
Letters::~Letters() {
	num--;
	std::cout << "Letter " << ch << "is destroyed, ";
	std::cout << num << "letter(s) remain" << std::endl;
}
char Letters::Value() {
	return ch;
}