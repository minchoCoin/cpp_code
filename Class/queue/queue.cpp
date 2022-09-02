#include <iostream>
#include "queue.h"
Queue::Queue() :number(0) {}
void Queue::Push(Person p) {
	line[number] = p;
	number++;
	std::cout<< p << "has joined the queue" << std::endl;
}
Person Queue::Pop() {
	Person p = line[0];
	for (int i = 1; i < number; i++) line[i - 1] = line[i];
	number--;
	std::cout << p << "has left the queue" << std::endl;
	return p;
}
int Queue::Number() {
	return number;
}