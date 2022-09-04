#pragma once
#include <iostream>
#include "Person.h"
#include <string>
class Author : virtual public Person {
private:
	int bookcnt;
public:
	Author(std::string n = "empty", int a = 50, int cnt = 15) : Person(n, a), bookcnt(cnt) {}
	Author& operator = (Author& a) {
		Person tmp = (Person)a;
		Person::operator=(tmp);
		bookcnt = a.bookcnt;
	}
	int BookCnt() const { return bookcnt; }
};
std::ostream& operator <<(std::ostream& os, const Author& a) {
	os << (Person)a;
	os << " BookCnt : " << a.BookCnt();
	return os;
}