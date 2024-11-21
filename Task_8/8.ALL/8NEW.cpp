#include <iostream>
#define PI 3.14159265359

using namespace std;

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

double pow(double num, long n){
    double res = 1;
    for(int i = 0; i < n; i++){
        res *= num;
    }
    return res;
}

double factorial(int n){
    double res = 1;
    for(int i = 1; i <= n; i++){
        res *= i;
    }
    return res;
}

double calculate_sides(double x1, double y1, double x2, double y2, double x3, double y3){ // 8.1 Вычисление суммы всех сторон
    long double res = sqrt((x2-x1) * (x2-x1) + (y2-y1) * (y2 -y1)) + sqrt((x3-x2) * (x3 - x2) + (y3-y2) * (y3 - y2)) + sqrt((x3-x1) * (x3-x1)+ (y3-y1) * (y3-y1));
    return res;
}

double calculate_heights(double a, double b, double c, double p) // 8.2 Вычисление суммы всех высот
{
	double height_a = (2 * sqrt(p*(p-a)*(p-b)*(p-c))) / a;
	double height_b = (2 * sqrt(p*(p-a)*(p-b)*(p-c))) / b;
	double height_c = (2 * sqrt(p*(p-a)*(p-b)*(p-c))) / c;
	return height_a + height_b + height_c;
}

double calculate_median(double a, double b, double c) // 8.3 Вычисление суммы всех медиан
{
	double median_a = 0.5 * sqrt(2 * pow(a,2) + 2 * pow(b,2) - pow(c,2));
	double median_b = 0.5 * sqrt(2 * pow(b,2) + 2 * pow(c,2) - pow(a,2));
	double median_c = 0.5 * sqrt(2 * pow(a,2) + 2 * pow(c,2) - pow(b,2));
	return median_a + median_b + median_c;
}

double calculate_bisector(double a, double b, double c, double p) // 8.4 Вычисление суммы всхе бисектрисс
{
	double bisector_a = (2 * sqrt(a * b * p * (p - c))) / (a + b);
	double bisector_b = (2 * sqrt(b * c * p * (p - a))) / (b + c);
	double bisector_c = (2 * sqrt(a * c * p * (p - b))) / (a + c);
	return bisector_a + bisector_b + bisector_c;
}

double acos(double x, int terms = 50) { // Вычисление арккосинуса
    double acosX = 0;
    for (int n = 0; n < terms; ++n) {
        double term = ((factorial(2 * n) / ((pow(pow(2, n) * factorial(n), 2)) * (2 * n + 1)))) * pow(x, 2 * n + 1);
        acosX += term;
    }
    return PI / 2 - acosX;
}



int main() 
{
    cout << "Введите координаты 3ёх вершин треугольника в формате (x1 y1 x2 y2 x3 y3): ";
	long double x1,y1,x2,y2,x3,y3,a,b,c,p,angle_A,radian_A,angle_B,radian_B,angle_C,radian_C, S, r, R;
    long double circle_R_length,circle_R_area,circle_r_length,circle_r_area, S2, S3, S4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	a = sqrt(pow(x2-x1,2)+pow(y2-y1,2)); // Сторона a
	b = sqrt(pow(x3-x2,2)+pow(y3-y2,2)); // Сторона b
	c = sqrt(pow(x3-x1,2)+pow(y3-y1,2)); // Сторона c
    p = (a + b + c) / 2; // Полупериметр
    S = sqrt(p * (p-a) * (p-b) * (p-c)); // Площадь по Герону
    R = (a * b * c) / (4 * S);
	r = S / p;

    angle_A = acos((b * b + c * c - a * a) / (2 * b * c)) * 180 / PI; 
	radian_A = angle_A / (180 / PI);

	angle_B = acos((a * a + c * c - b * b) / (2 * a * c)) * 180 / PI;
	radian_B = angle_B / (180 / PI);

	angle_C = acos((b * b + a * a - c * c) / (2 * a * b)) * 180 / PI;
	radian_C = angle_C / (180 / PI);


	circle_R_length = 2 * PI * R;
	circle_r_length = 2 * PI * r;
	circle_R_area = PI * pow(R,2);
	circle_r_area = PI * pow(r,2);

    S2 = r * p;
    S3 = (a * b * c) / (4 * R);
    S4 = 0.5 * a * (2 * sqrt(p*(p-a)*(p-b)*(p-c))) / a;

    
    cout << "Длины всех сторон треугольника: " << calculate_sides(x1,y1,x2,y2,x3,y3) << '\n';
    cout << "Дины всех высот треугольника: " << calculate_heights(a, b, c, p) << '\n';
    cout << "Дины всех медиан треугольника: " << calculate_median(a, b, c) << '\n';
    cout << "Дины всех бисектрисс треугольника: " << calculate_bisector(a, b, c, p) << '\n';

    cout << "Градусная мера угла A: " << angle_A << "°," << " Радианная мера угла: " << radian_A << '\n';
	cout << "Градусная мера угла B: " << angle_B << "°," << " Радианная мера угла: " << radian_B << '\n';
	cout << "Градусная мера угла C: " << angle_C << "°," << " Радианная мера угла: " << radian_C << '\n';

    cout << "Радиус вписанной окружности: " << r << '\n';
	cout << "Радиус описанной окружности: " << R << '\n';
	cout << "Длина окружности описанного треугольника: " << circle_R_length << ", а площадь: " << circle_R_area << '\n';
	cout << "Длина окружности вписанного треугольника: " << circle_r_length << ", а площадь: " << circle_r_area << '\n';
    cout << "1. Площадь треугольника по Герону: " << S << '\n';
    cout << "2. Площадь треугольника по радиусу вписанной окружности: " << S2 << '\n';
    cout << "3. Площадь треугольника по радиусу описанной окружности: " << S3 << '\n';
    cout << "4. Площадь треугольника по высоте треугольника, проведнной к стороне a: " << S4 << '\n';


    return 0;

}