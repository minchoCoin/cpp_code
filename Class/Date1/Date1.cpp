#include <iostream>
#include "Date1.h"

int main(void) {
	Date newYearsDay(1, 1, 2017);
	newYearsDay.PrintDate();
	newYearsDay.IncreaseDate();
	newYearsDay.PrintDate();
	newYearsDay.PrintLeap();

	Date d(5, 15, 2016);

	d.IncreaseDate();
	d.PrintDate();
	d.PrintLeap();

	for (Date dd(2, 25, 2017); dd.Day() < 3 || dd.Day() > 10; dd.IncreaseDate()) {
		dd.PrintDate();
	}
	return 0;
}