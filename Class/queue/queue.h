#pragma once
#include "person.h"
class Queue {
private:
	Person line[20];
	int number;
public:
	Queue();
	void Push(Person p);
	Person Pop();
	int Number();
};