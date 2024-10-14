#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double func1(double x)
{
    return pow(x, 2);
}

double func2(double x)
{
    return sin(x);
}

int main()
{
    //metoda pol trapezow
    int a = 0;
    double b = 0.875;      //wartosc wyliczona uzywajac bisekcje, jest to pierwiastek funkcji x^2 - sin(x)
    double dx = 0.005;     //od tej zmiennej zalezy na ile trapezow zostanie podzielony przedzial [a, b]
    double pole_pierwsze;  //pole pod wykresem funkcji x^2
    double pole_drugie;    //pole pod wykresem funkcji sin(x)

    double x = a;

    while(x < b)
    {
        pole_pierwsze += (func1(x)+func1(x+dx))*0.5*dx;
        pole_drugie += (func2(x)+func2(x+dx))*0.5*dx;

        x += dx;
    }

    cout << "Pole miedzy wykresami sin(x) i x^2 wynosi: " << setprecision(4) << abs(pole_pierwsze - pole_drugie) << '\n';

    return 0;
}