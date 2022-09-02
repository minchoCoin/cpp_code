int x;
void fun() {
	int x = 1; //local
	::x = 10; //global
	{
		int x = 2; //local2
		::x = 20; //global
	}
	int* p = &x; //global
}