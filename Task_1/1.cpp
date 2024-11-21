#include <iostream>

int main()
{
	long double x;
	std::cin >> x;
	long double num1 = 23 * x * x;
	long double num2 = 69 * x;
	long double res  = x * (num1 + num2 + 32) + 8;
	std::cout << res;

    return 0;

}