#include<iostream>

int main() {
	int a, b;
	std::cin >> a;
	std::cin >> b;
	a%b == 0 ? std::cout << "0" << std::endl : std::cout << b - a%b<<std::endl;

	return 0;
}