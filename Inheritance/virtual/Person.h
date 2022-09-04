#pragma once
#include <iostream>
#include <string>
class Person {
private:
	std::string name;
	int age;

public:
	Person(std::string n = "empty", int a = 50) : name(n), age(a) {}
	Person& operator = (Person& p) {
		name = p.name;
		age = p.age;
	}
	std::string Name() const { return name; }
	int Age() const { return age; }
};
std::ostream& operator <<(std::ostream& os, const Person p) {
	os << "name : " << p.Name() << " age : " << p.Age();
	return os;
}