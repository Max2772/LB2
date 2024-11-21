#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;

    cout << "Начальное состояние:" << '\n';
    cout << "a = " << a << ", b = " << b << '\n';

    int n = 0;
    while (b != 0) {
        n++;
        int temp = a % b;

        cout << "Шаг " << n << ":" << '\n';
        cout << "Перед выполнением: a = " << a << ", b = " << b << ", остаток = " << temp << '\n';

        a = b;
        b = temp;

        cout << "После выполнения: a = " << a << ", b = " << b << '\n';
    }

    cout << "НОД: " << a << '\n';

    return 0;
}
