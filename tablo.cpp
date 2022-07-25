#include <iostream>

int seconds_conversion(int);

int main() {
	int n = 0;
	std::cout << "Enter number of seconds" << std::endl;
	do {
		std::cin >> n;
		seconds_conversion(n);
	} while (n != 0);
	std::cout << "its time to relax!" << std::endl;
	return 0;
}
int seconds_conversion(int a) {
	int result = 0;
	if (a > 28800 || a < 0) {
		std::cout << "its not working time now" << std::endl;
	}
	else {
		a /= 3600;
		std::cout << a << " hours left" << std::endl;
	}
	return result;
}