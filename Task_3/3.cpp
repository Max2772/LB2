#include <iostream>

int main()
{

    double b1,res,q;
    double n = 3;

    std::cin >> b1;

    q = 1/(n+1);

    res = b1 / (1-q);

    std::cout << res;

    return 0;

}