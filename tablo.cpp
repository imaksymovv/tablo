#include <iostream>

int definition(int);

int main() {
	int n = 0;
	std::cout << "Enter number of seconds" << std::endl;
	do {
		std::cin >> n;
		definition(n);
	} while (n != 0);
	std::cout << "its time to relax!" << std::endl;
	return 0;
}
int definition(int a) {
	int result = 0;
	if (a > 28800 || a < 0) {
		std::cout << "its not working time now" << std::endl;
	}
	else {
		a = a / 3600;
		std::cout << a << " hours left" << std::endl;
	}
	return result;
}