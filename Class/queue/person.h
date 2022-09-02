#pragma once
#include <string>
class Person {
private:
	std::string name;
	int age;
public:
	Person(std::string s, int a=0) : name(s),age(a) {}
	Person() : name(std::string()),age(0) {}
	Person& operator=(Person& p) {
		name = p.name;
		age = p.age;
	}
	std::string Name() { return name; }
	int Age() { return age; }
};