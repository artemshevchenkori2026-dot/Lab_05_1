#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

// Прототип
double p(const double x);
void run_unit_test();

int main()
{
    // 1. Запуск unit-тесту перед основною логікою
    run_unit_test();

    // 2. Основне завдання
    double s;
    cout << "s = "; cin >> s;

    double numerator = pow(p(1 + s * s), 2) + pow(p(1 - s * s * s), 3);
    double denominator = 1 + p(10 * s);

    double c = numerator / denominator;
    cout << "c = " << c << endl;

    return 0;
}

double p(const double x)
{
    return 1 + pow(sin(x), 2);
}

// Функція unit-тесту
void run_unit_test()
{
    assert(abs(p(0) - 1.0) < 1e-5);
    cout << "[Unit Test OK] p(0) == 1" << endl;
}