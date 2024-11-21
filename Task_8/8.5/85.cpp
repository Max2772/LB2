#include <iostream>

const double M_PI = 3.1415926535;

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
	double x1,y1,x2,y2,x3,y3,a,b,c,angle_A,radian_A,angle_B,radian_B,angle_C,radian_C;	
	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	a = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	b = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
	c = sqrt(pow(x3-x1,2)+pow(y3-y1,2));

	angle_A = acos((b * b + c * c - a * a) / (2 * b * c)) * 180 / M_PI;
	radian_A = angle_A / (180 / M_PI);

	angle_B = acos((a * a + c * c - b * b) / (2 * a * c)) * 180 / M_PI;
	radian_B = angle_B / (180 / M_PI);

	angle_C = acos((b * b + a * a - c * c) / (2 * a * b)) * 180 / M_PI;
	radian_C = angle_C / (180 / M_PI);


	std::cout << "Градусная мера угла A: " << angle_A << "°," << "Радианная мера угла: " << radian_A << std::endl;
	std::cout << "Градусная мера угла A: " << angle_B << "°," << "Радианная мера угла: " << radian_B << std::endl;
	std::cout << "Градусная мера угла A: " << angle_C << "°," << "Радианная мера угла: " << radian_C << std::endl;

    return 0;

}