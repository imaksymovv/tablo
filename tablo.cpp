#include <iostream>

int definition(int);

int main() {
	int n = 0;
	std::cout << "Enter number of seconds" << std::endl;
	do {
		std::cin >> n;
		definition(n);
	} while (n != 0);
	return 0;
}
int definition(int a) {
	if (a < 0 || a > 28800) {
		std::cout << "it's not working time now" << std::endl;
	}
	else if (a == 28800) {
		std::cout << "8 hours left" << std::endl;
	}
	else if (25200 <= a && a < 28800) {
		std::cout << "7 hours left" << std::endl;
	}
	else if (21600 <= a && a < 25200) {
		std::cout << "6 hours left" << std::endl;
	}
	else if (18000 <= a && a < 21600) {
		std::cout << "5 hours left" << std::endl;
	}
	else if (14400 <= a && a < 18000) {
		std::cout << "4 hours left" << std::endl;
	}
	else if (10800 <= a && a < 14400) {
		std::cout << "3 hours left" << std::endl;
	}
	else if (7200 <= a && a < 10800) {
		std::cout << "2 hours left" << std::endl;
	}
	else if (3600 <= a && a < 7200) {
		std::cout << "1 hour left" << std::endl;
	}
	else if (0 < a && a < 3600) {
		std::cout << "less than an hour left" << std::endl;
	}
	else if (a == 0) {
		std::cout << "It's time to relax!" << std::endl;
	}
	return 0;
}
