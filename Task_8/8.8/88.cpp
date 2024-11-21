#include <iostream>

const double M_PI = 3.1415926535;

double acos(double x) {
    if (x < -1 || x > 1) {
        std::cout << "Ошибка: ввод должен быть в диапазоне [-1, 1]" << std::endl;
        return -1;
    }

    double pi = 3.14159265358979323846;
    double sum = 0;

    double term = x;  
    sum += term;
    term = x * x * x / 6;
    sum += term;
    term = 3 * x * x * x * x * x / 40;
    sum += term;
    term = 5 * x * x * x * x * x * x * x / 112;
    sum += term;

    return pi / 2 - sum;
}

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

double calculate_height(double a, double b, double c, double p) // Подсчет рандом высоты
{
	double func_a = (2 * sqrt(p*(p-a)*(p-b)*(p-c))) / a;
	return func_a;
}

int main() 
{
	double x1,y1,x2,y2,x3,y3,a,b,c,p,r,R,S1,S2,S3,S4,S5,angle_A;
	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	a = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	b = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
	c = sqrt(pow(x3-x1,2)+pow(y3-y1,2));

	p = (a + b + c) / 2;

	S1 = sqrt(p * (p-a) * (p-b) * (p-c)); // Герон

	R = (a * b * c) / (4 * S1);

	r = S1 / p;

	S2 = r * (a + b + c) / 2; // Радиус вписан окружн

	S3 = (a * b * c) / (4 * R); // Радиус описан окружн

	S4 = 0.5 * a * calculate_height(a,b,c,p);

	std::cout << "Площадь 1: " << S1 << std::endl;
	std::cout << "Площадь 2: " << S2 << std::endl;
	std::cout << "Площадь 3: " << S3 << std::endl;
	std::cout << "Площадь 4: " << S4 << std::endl;


    return 0;

}