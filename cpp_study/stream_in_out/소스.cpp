#include <iostream>
using namespace std;

class Person {
public:
	Person() { idNum = 990101, age = 20; }
	Person(int i, int a) { idNum = i, age = a; }
	friend ostream& operator <<(ostream& os, const Person& p);
private:
	int idNum;
	int age;

};

ostream& operator << (ostream& os, const Person& p) {
	os << "birthday is " << p.idNum << ", age is " << p.age << endl;
	return os;
}

int main(void) {
	Person p(940101, 23);
	cout << p;
	return 0;
}