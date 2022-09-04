#include <iostream>
#include <string>
#include "Professor_Author.h"

int main(void) {
	Professor_Author pa("James", 55, "physics", 20);
	std::cout << pa << std::endl;
	std::cout << pa.Name() << std::endl;
	std::cout << pa.Professor::Name() << std::endl;
	std::cout << pa.Author::Name() << std::endl;
	std::cout << pa.Age() << std::endl;
	std::cout << pa.Professor::Age() << std::endl;
	std::cout << pa.Author::Age() << std::endl;

	return 0;
}