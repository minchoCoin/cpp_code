#include <iostream>
#include "queue.h"
using namespace std;

int main(void) {
	Queue q;
	cout << "number of q : " << q.Number() << endl;

	Person p1("È«±æµ¿",30);
	Person p2("½Å»çÀÓ´ç",40);
	Person p3("·ù¼º·æ",50);
	Person p4("Á¤¾à¿ë",60);

	q.Push(p1);
	q.Push(p2);
	q.Push(p3);
	q.Push(p4);
	cout << "number of q : " << q.Number() << endl;

	q.Pop();
	cout << "number of q : " << q.Number() << endl;
	q.Push(Person("Á¤Çüµ·",30));
	cout << "number of q : " << q.Number() << endl;

	cout << "all people will be left..." << endl;
	while (q.Number() > 0) {
		q.Pop();
		cout << "number of q : " << q.Number() << endl;
	}

}