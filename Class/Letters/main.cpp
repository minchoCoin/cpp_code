#include <iostream>
#include "Letters.h"

using namespace std;
int Letters::num = 0;//class 변수의 외부 정의

int main(void) {
	cout << "Number of letters at the beginning : " << Letters::Number() << endl;
	Letters A('a');
	Letters B('b');
	Letters C('c');
	Letters D('d');

	cout << "Number of letters after declaration : " << Letters::Number() << endl; //A.Number()
	/*
	{
		Letters* pE = new Letters('e');
		cout << "Number of letters after malloc : " << Letters::Number() << endl; //A.Number()
	}
	cout << "Number of letters after block : " << Letters::Number() << endl; //A.Number()
	*/
	
	

	Letters* pF;
	pF = new Letters('f');
	cout << "Number of letters after malloc : " << Letters::Number() << endl; //A.Number()
	delete pF;
	cout << "Number of letters after delete : " << Letters::Number() << endl; //A.Number()
	return 0;
}
