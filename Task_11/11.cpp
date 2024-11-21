#include <iostream>

int main()
{
	double h1,min1,h2,min2,h_res,min_res;
	std::cin >> h1 >> min1 >> h2 >> min2;

	min_res = (h2 * 60 + min2) - (h1 * 60 + min1);

	if (min_res < 0)
		min_res = min_res + 60 * 24;

	h_res = min_res / 60;
	
	std::cout << h_res << " часов или " << min_res << " минут" << std::endl;

    return 0;

}