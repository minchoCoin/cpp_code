#include <iostream>
using namespace std;
int Strlen(const char* string) {
	int len = 0;
	while (string[len] != '\0') len++;
	return len;
}
void strcpy(char* str1, int str2len, const char* str2) {
	for (int i = 0; i < str2len; ++i) {
		*(str1 + i) = *(str2 + i);
	}
}
class String {
public:
	String();
	String(const String& str);
	String& operator = (const String&);
	String& operator = (const char*);
	String(const char*);
	//String(char*);
	~String();
	char* string;
private:
	int length;
};
String::String() {
	string = new char[100];
	length = 0;
}

String::String(const char* _string) {
	length = Strlen(_string);
	string = new char[length + 1];
	strcpy(this->string, length + 1, _string);
}
String::String(const String& str) {
	length = str.length;
	string = new char[str.length + 1];
	strcpy(string, str.length + 1, str.string);
}
String& String::operator=(const String& str) {
	length = str.length;
	string = new char(length + 1);
	strcpy(string, str.length + 1, str.string);
}
String& String::operator=(const char* str) {
	length = Strlen(str);
	string = new char(length + 1);
	strcpy(string, length + 1, str);
}
String::~String() {
	delete[]string;
}


int main(void) {
	String s1;
	String s2("Programming");
	cout << s2.string << endl;
	String s3(s2);
	cout << s3.string << endl;
	s1 = s2;
	return 0;
}