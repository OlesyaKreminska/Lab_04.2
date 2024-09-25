#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double x, xp, xk, dx;  // Параметри інтервалу та кроку
    double y;  // Результат обчислення виразу
    double A;  // Проміжний результат - функціонально стала частина виразу
    double B;  // Проміжний результат - функціонально змінна частина виразу

    cout << "xp = "; cin >> xp;  // Початок інтервалу
    cout << "xk = "; cin >> xk;  // Кінець інтервалу
    cout << "dx = "; cin >> dx;  // Крок інтервалу

    cout << fixed << setprecision(2); // Форматування виводу
    cout << "--------------------------------" << endl;
    cout << "|" << setw(10) << "x" << " |" << setw(15) << "y" << " |" << endl;
    cout << "--------------------------------" << endl;

    for (x = xp; x <= xk; x += dx) {
        A = 5 * exp(3 * x);

        if (x < -1) {
            B = sqrt(2) * pow(x, 3) - 7;
        }
        else if (x >= -1 && x < 3) {
            B = 2 * log10(1 - x / 4);
        }
        else {
            B = cos(fabs(x)) + 3;
        }

        y = A - B;

        cout << "|" << setw(10) << x
            << " |" << setw(15) << y
            << " |" << endl;
    }

    cout << "--------------------------------" << endl;

    return 0;
}
