// Лабораторна робота № 5.3
// Варіант 12

#include <iostream>
#include <cmath>
using namespace std;

double f(const double x);

int main()
{
    double tp, tk, t, z;
    int n;

    cout << "tp = "; cin >> tp;
    cout << "tk = "; cin >> tk;
    cout << "n = "; cin >> n;

    if (n <= 0 || tp > tk)
    {
        cout << "Incorrect input!" << endl;
        return 1;
    }

    double dt = (tk - tp) / n;

    cout << "\n   t              z\n";
    cout << "-------------------------\n";

    t = tp;

    for (int i = 0; i <= n; i++)
    {
        z = f(t * t) + 2 * f(2 * t + 1);

        cout << t << "        " << z << endl;

        t = tp + (i + 1) * dt;
    }

    return 0;
}

double f(const double x)
{
    if (abs(x) >= 1)
        return (sin(x) + 1) / (sin(x) + cos(x));
    else
    {
        double S = 0;
        int i = 0;
        double a = x;

        S = a;

        do
        {
            i++;
            double R = x * x / ((2 * i) * (2 * i + 1));
            a *= R;
            S += a;
        } while (i < 8);

        return S;
    }
}