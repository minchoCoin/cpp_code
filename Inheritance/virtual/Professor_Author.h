#pragma once
#include <iostream>
#include <string>
#include "professor.h"
#include "author.h"
class Professor_Author : public Professor, public Author {
public:
	Professor_Author(std::string n="empty", int a = 50, std::string sub = "computer science", int cnt = 15) : Professor(n, a, sub), Author(n, a, cnt),Person(n,a) {}//Person(n,a) is need!!!
	Professor_Author& operator =(Professor_Author& pa) {
		Professor p = (Professor)pa;
		Author a = (Author)pa;
		Professor::operator=(p);
		Author::operator=(a);
	}
};
std::ostream& operator <<(std::ostream& os, Professor_Author pa) {
	os << (Professor)pa;
	os <<" bookcnt : " << pa.BookCnt();
	return os;
}