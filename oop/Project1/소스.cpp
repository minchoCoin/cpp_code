#include <iostream>
using namespace std;
//non member �Լ�
int Triple1(int number) {
	return number * 3;
}
//non member �Լ������� ���� ������(const ��)�� ����� �� ����.

class Number {
private:
	int n;
	static int cnt;
public:
	Number(int num) : n(num) { cnt++; }
	~Number() { cnt--; }
	void Triple2() {  //void Triple2() const������ ������ ���� �Ұ�
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