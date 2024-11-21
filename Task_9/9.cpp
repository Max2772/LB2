#include <iostream>
#include <cmath>

int main()
{
	double z;
	std::cout << "Введите z: ";
	std::cin >> z;

	if(z >= 1){
		z = cbrt(z);
	}

	double x = z;

	std::cout << "Выберите f(x): \nЕсли f(x) = 2x, то напишите 1 \nЕсли f(x) = x^3, то напишите 2 \nЕсли f(x) = x/3, то напишите 3" << std::endl;

	int N;
	std::cin >> N;
	
	double a,b,res;
	std::cout << "Введите a и b: " << std::endl;
	std::cin >> a >> b;

	switch(N)
	{
	case 1:
		res = -1 * M_PI * 2 * x + a * pow(cos(x*x*x),2) + b * pow(sin(x * x),3);
		std::cout << "y = -π * 2x + " << a << " (cosx^2)^3 + " << b << " * (sin(x^2))^3;\n";
		std::cout << "Результат: " << res << std::endl;
		break;
	case 2:
		res = -1 * M_PI * x * x * x + a * pow(cos(x*x*x),2) + b * pow(sin(x * x),3);
		std::cout << "y = -π * x^3 +  " << a << " (cosx^2)^3 + " << b << " * (sin(x^2))^3;\n";
		std::cout << "Результат: " << res << std::endl;
		break;
	case 3:
		res = -1 * M_PI * x / 3 + a * pow(cos(x*x*x),2) + b * pow(sin(x * x),3);
		std::cout << "y = -π * x/3 + " << a << " (cosx^2)^3 + " << b << " * (sin(x^2))^3;\n";
		std::cout << "Результат: " << res << std::endl;
		break;

	}

    return 0;

}