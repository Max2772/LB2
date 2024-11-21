#include <iostream>

int main()
{
	double a,b,c;
	int N;
	std::cin >> N;
	a = -13.8;
	b = 8.9;
	c = 25.0;

	switch(N){
	case 2:
		std::cout << (b*c - a * a);
		break;
	case 56:
		std::cout << b * c;
		break;
	case 7:
		std::cout << a * a * a * a * a * a * a + c;
		break;
	case 3:
		std::cout << a - b * c;
		break;
	default:
		std::cout << (a + b) * (a + b) * (a + b);
	}

    return 0;

}