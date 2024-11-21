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

double calculate_median(double a, double b, double c)
{
	double func_a = 0.5 * sqrt(2 * pow(a,2) + 2 * pow(b,2) - pow(c,2));
	double func_b = 0.5 * sqrt(2 * pow(b,2) + 2 * pow(c,2) - pow(a,2));
	double func_c = 0.5 * sqrt(2 * pow(a,2) + 2 * pow(c,2) - pow(b,2));
	return func_a + func_b + func_c;
}

int main() 
{
	double x1,y1,x2,y2,x3,y3,a,b,c,p;
	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	a = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	b = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
	c = sqrt(pow(x3-x1,2)+pow(y3-y1,2));

	std::cout << "Длина всех медиан треугольника: " << calculate_median(a,b,c) << std::endl;

    return 0;

}