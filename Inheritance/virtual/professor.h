#pragma once
#include <iostream>
#include <string>
#include "Person.h"
class Professor : virtual public Person {
private:
	std::string subject;
public:
	Professor(std::string n = "empty", int a = 50, std::string sub = "computer science") : Person(n, a), subject(sub) {}
	Professor& operator = (Professor& p) {
		Person tmp = (Person)p;
		Person::operator=(tmp);
		subject = p.subject;
	}
	std::string Subject() const { return subject; }
};
std::ostream& operator <<(std::ostream& os, const Professor& p) {
	os << (Person)p;
	os << " subject : " << p.Subject();
	return os;
}