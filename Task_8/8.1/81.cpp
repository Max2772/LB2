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

int main() 
{
	long double x1,y1,x2,y2,x3,y3,res;
	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	res = sqrt((x2-x1) * (x2-x1) + (y2-y1) * (y2 -y1)) + sqrt((x3-x2) * (x3 - x2) + (y3-y2) * (y3 - y2)) + sqrt((x3-x1) * (x3-x1)+ (y3-y1) * (y3-y1));

	std::cout << "Длина всех сторон треугольника: " << res << std::endl;

    return 0;

}

// 1 2 4 6 7 2 == 16;