#include <iostream>
#include <fstream>

using namespace std;
int main(void) {
	char ch;
	fstream file;
	char filename[100];
	cout << "filename = " << flush;
	cin >> filename;
	file.open(filename, ios::in);
	file.unsetf(ios::skipws);
	while (1) {
		file >> ch;
		if (file.fail()) break;
		cout << ch;
	}
	file.close();
	return 0;
}