#include <iostream>

double sqrt(double x) {
    double left = 0, right = x + 1;

    for (int i = 0; i < 200; i++) {
        double middle = (left + right) / 2;
        if (middle * middle < x) {
            left = middle;
        } else {
            right = middle;
        }
    }

    return left;
}

double pow(double a, int n)
{
	double res = 1;
	for(int i = 0; i < n; i++){
		res *= a;
	}
	return res;
}

double abs(double a)
{
	a = (a < 0) ? a * (-1) : a;
	return a;
}

int main()
{
	double x1,y1,r,x2,y2,R,d;
	std::cin >> x1 >> y1 >> r >> x2 >> y2 >> R;

	d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	if(d + r <= R)
	{
		std::cout << "Да";
	}else if(d + R <= r)
	{
		std::cout << "Да, но справедливо обратное для двух фигур";
	}else if(abs(r - R) < d && d < r + R)
	{
		std::cout << "Фигуры пересекаются";
	}else
		std::cout << "Ни одно условие не выполняется";

    return 0;

}