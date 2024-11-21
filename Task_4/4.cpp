#include <iostream>

int main()
{

    double A,B,C,X,Y,K;
    std::cout << "Введите X и Y: ";
    std::cin >> X >> Y;

    std::cout << "Введите K ";
    std::cin >> K;

    std::cout << "Введите A,B,C: ";
    std::cin >> A >> B >> C;

    if(X < Y){
        X = 0;
    }else if (X > Y)
    {
        Y = 0;
    }else
    {
        X, Y = 0;
    }

    if(A > B && A > C)
    {   
        A = A - K;
    }else if(B > A && B > C)
    {
        B = B - K;
    }else if(C > A && C > B)
    {
        C = C - K;
    }

    std::cout << "X = " << X << " " << "Y = " << Y << " " << "A = " << A << " " << "B = " << B << " " << "C = " << C << '\n';


    return 0;
}