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

/*

double calculate_angle(double a, double b, double c)
{
	double func_angle = acos((b * b + c * c - a * a) / (2 * b * c)) * 180 / M_PI;                -20 минут лол
	return func_angle;
}

double calculate_radian(double a, double b, double c)
{
	double func_radian = acos((b * b + c * c - a * a) / (2 * b * c));
	return func_radian;
}

*/

int main() 
{
	double x1,y1,x2,y2,x3,y3,a,b,c,p,S,r,R;
	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	a = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	b = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
	c = sqrt(pow(x3-x1,2)+pow(y3-y1,2));

	p = (a + b + c) / 2;

	S = sqrt(p * (p-a) * (p-b) * (p-c));

	R = (a * b * c) / (4 * S);

	r = S / p;

	std::cout << "Радиус вписанной окружности: " << r << std::endl;
	std::cout << "Радиус описанной окружности: " << R << std::endl;

    return 0;

}