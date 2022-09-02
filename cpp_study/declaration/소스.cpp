#include <iostream>
using namespace std;
int multiply(int, int); //1
float multiply(float, float); //2

int main(void) {
	int i = 10;
	int j = 20;

	float a = 1.25;
	float b = 2.5;

	int k = multiply(i, j);//1번 함수 호출
	float c = multiply(a, b);//2번 함수 호출

	cout << "k = " << k << " c = " << c << endl;
	return 0;
}
int multiply(int n1, int n2) {
	return (n1 * n2);
}
float multiply(float n1, float n2) {
	return (n1 * n2);
}