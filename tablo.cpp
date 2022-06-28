#include <iostream>

int main() {
	int n = 0;
	std::cout << "Enter number of seconds" << std::endl;
	do {
		std::cin >> n;
		if (n < 0 || n > 28800) {
			std::cout << "it's not working time now" << std::endl;
		}
		else if (n == 28800) {
			std::cout << "8 hours left" << std::endl;
		}
		else if (25200 <= n && n < 28800) {
			std::cout << "7 hours left" << std::endl;
		}
		else if (21600 <= n && n < 25200) {
			std::cout << "6 hours left" << std::endl;
		}
		else if (18000 <= n && n < 21600) {
			std::cout << "5 hours left" << std::endl;
		}
		else if (14400 <= n && n < 18000) {
			std::cout << "4 hours left" << std::endl;
		}
		else if (10800 <= n && n < 14400) {
			std::cout << "3 hours left" << std::endl;
		}
		else if (7200 <= n && n < 10800) {
			std::cout << "2 hours left" << std::endl;
		}
		else if (3600 <= n && n < 7200) {
			std::cout << "1 hour left" << std::endl;
		}
		else if (0 < n && n < 3600) {
			std::cout << "less than an hour left" << std::endl;
		}
		else if (n == 0) {
			std::cout << "It's time to relax!" << std::endl;
		}
	} while (n != 0);
	return 0;
}