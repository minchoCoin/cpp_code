#include <iostream>
using namespace std;
//non member 함수
int Triple1(int number) {
	return number * 3;
}
//non member 함수에서는 형식 한정자(const 등)을 사용할 수 없다.

class Number {
private:
	int n;
	static int cnt;
public:
	Number(int num) : n(num) { cnt++; }
	~Number() { cnt--; }
	void Triple2() {  //void Triple2() const에서는 변수값 변경 불가
		n *= 3;
	}
	int Value() const {
		return n;
	}
	static int Triple3(int num) {
		return num * 3;
	}
	static int count()  {
		return cnt;
	}
};
int Number::cnt = 0;

int main(void) {
	int intNum = 5;
	Number objNum(5);
	int triple;
	triple = Triple1(intNum); //15
	cout << triple << endl;
	triple = Number::Triple3(intNum); //15
	cout << triple << endl;
	objNum.Triple2(); //Number::n = 15
	triple = objNum.Value(); //15
	cout << triple << endl;
	return 0;
}