#pragma once

class Letters {
private:
	char ch;
	static int num;
public:
	Letters(char c);
	~Letters();
	char Value();
	static int Number() {
		return num;
	}
};
