#include <iostream>
using namespace std;

class A {
private:
	int n;
public:
	A(int m) : n(m) {}
	int Read() const {
		cout << n;
		return n;
	}
	int Read2() {
		cout << n;
		return n;
	}
	int Write(int m) {
		n = m;
	}
	friend ostream& operator <<(ostream& os, const A& a1) {
		os << a1.n;
		a1.Read();
		//a1.Read2(); //error
		//a1.Write(3); //error
	}
};

int main(void) {
	A a1(5);
	a1.Write(3);
	a1.Read();

	const A a2(8);
	//a2.Write(6);// error
	a2.Read();
	//a2.Read2(); //error
	return 0;
}