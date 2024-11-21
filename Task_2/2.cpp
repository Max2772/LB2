#include <iostream>

int main()
{

    long double a,b,c;
    std::cin >> a >> b >> c;

    if(a + b > c && a + c > c && b + c > a) {  
        std::cout << "Существует";

    }else
    {
        std::cout << "НЕ существует";
    }

    return 0;

}
