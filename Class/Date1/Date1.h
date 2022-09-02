#pragma once
#include <iostream>
class Date {
private:
	int month;
	int day;
	int year;

public:
	Date(int m, int d, int y) : month(m), day(d), year(y) {}
	int Month() {
		return month;
	}
	int Day() {
		return day;
	}
	int Year() {
		return year;
	}
	int LeapYear();
	int DaysInMonth();
	void IncreaseDate();
	void PrintDate();
	void PrintLeap();


	
};
int Date::LeapYear() {
	if (year % 4 != 0)
		return 0;
	else {
		if (year % 100 != 0) return 1;
		else if (year % 400 != 0) return 0;
		else return 1;
	}
}

int Date::DaysInMonth() {
	switch (month) {
	case 2:
		if (LeapYear()) return 29;
		else return 28;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	default:
		return 31;
	}
}

void Date::IncreaseDate() {
	if (day < DaysInMonth()) day++;
	else {
		day = 1;
		if (month != 12) month++;
		else {
			month = 1;
			year++;
		}
	}
}

void Date::PrintDate() {
	std::cout << "\nDate : " << month << "/" << day << "/" << year << std::endl;

}
void Date::PrintLeap() {
	std::cout << "This year ..." << std::endl;
	if (LeapYear()) {
		std::cout << "is LeapYear" << std::endl;
	}
	else {
		std::cout << "isn't LeapYear" << std::endl;
	}
}

