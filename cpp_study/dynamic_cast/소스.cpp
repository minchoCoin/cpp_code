#include <iostream>
using namespace std;

class Parent {
public:
	virtual void Print() {}
};

class Child_1 :public Parent {
public:
	virtual void Print() {
		cout << "Child_1 is ok" << endl;
	}
	void only_child1() {
		cout << "child1_only_function" << endl;
	}
};

class Child_2 :public Parent {
public:
	virtual void Print() {
		cout << "Child_2 is ok" << endl;
	}
	void only_child2() {
		cout << "child2_only_function" << endl;
	}
};

int main(void) {
	Parent* p_1 = new Child_1;
	Parent* p_2 = new Parent;

	Child_1* pchild1 = dynamic_cast<Child_1*>(p_1);
	if (pchild1 == NULL) { cout << "1.pchild1 is NULL"<<endl; };
	Child_2* pchild2 = dynamic_cast<Child_2*>(p_2);
	if (pchild2 == NULL) { cout << "2.pchild2 is NULL"<<endl; };
	pchild2 = dynamic_cast<Child_2*>(p_1);
	if (pchild2 == NULL) { cout << "3.pchild2 is NULL"<<endl; };
}