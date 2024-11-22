#include <iostream>
#include <iomanip>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Оголошення змінних
    double a, b, c, X_poch, X_kin, dX;

    // Введення даних з клавіатури
    cout << "Введіть a: ";
    cin >> a;
    cout << "Введіть b: ";
    cin >> b;
    cout << "Введіть c: ";
    cin >> c;
    cout << "Введіть початкове значення X (X_поч): ";
    cin >> X_poch;
    cout << "Введіть кінцеве значення X (X_кін): ";
    cin >> X_kin;
    cout << "Введіть крок (dX): ";
    cin >> dX;

    // Заголовок таблиці
    cout << setw(10) << "X" << setw(15) << "F(X)" << endl;
    cout << "----------------------------" << endl;

    // Цикл для обчислення значення функції на кожному кроці
    for (double x = X_poch; x <= X_kin; x += dX) {
        double F;

        // Обчислення функції F відповідно до умов
        if (x < 0 && b != 0) {
            F = -a * x * x + b;
        }
        else if (x > 0 && b == 0) {
            F = x / (x - c) + 5.5;
        }
        else {
            F = x / (x - c);
        }

        // Виведення результату у вигляді таблиці
        cout << setw(10) << x << setw(15) << F << endl;
    }

    return 0;
}
