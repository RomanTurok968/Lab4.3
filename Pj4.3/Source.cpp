#include <iostream>
#include <iomanip>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // ���������� ������
    double a, b, c, X_poch, X_kin, dX;

    // �������� ����� � ���������
    cout << "������ a: ";
    cin >> a;
    cout << "������ b: ";
    cin >> b;
    cout << "������ c: ";
    cin >> c;
    cout << "������ ��������� �������� X (X_���): ";
    cin >> X_poch;
    cout << "������ ������ �������� X (X_��): ";
    cin >> X_kin;
    cout << "������ ���� (dX): ";
    cin >> dX;

    // ��������� �������
    cout << setw(10) << "X" << setw(15) << "F(X)" << endl;
    cout << "----------------------------" << endl;

    // ���� ��� ���������� �������� ������� �� ������� �����
    for (double x = X_poch; x <= X_kin; x += dX) {
        double F;

        // ���������� ������� F �������� �� ����
        if (x < 0 && b != 0) {
            F = -a * x * x + b;
        }
        else if (x > 0 && b == 0) {
            F = x / (x - c) + 5.5;
        }
        else {
            F = x / (x - c);
        }

        // ��������� ���������� � ������ �������
        cout << setw(10) << x << setw(15) << F << endl;
    }

    return 0;
}
