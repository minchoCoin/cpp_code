#pragma once
#include <iostream>
#include <string>
class Person {
private:
	std::string name;
	int age;
public:
	Person(std::string s, int a=0) : name(s),age(a) {}
	Person() : name(std::string()),age(0) {}
	Person(const Person& p) {
		name = p.name;
		age = p.age;
	}
	Person& operator=(Person& p) {
		name = p.name;
		age = p.age;
		return p;
	}
	
	std::string Name() { return name; }
	int Age() { return age; }
	friend std::ostream& operator <<(std::ostream& os, Person& p) {

		os << p.name << "(" << p.age << ")";
		return os;

	}
	
};
