#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double func(double x)
{
    return pow(x, 2) - sin(x);
}

int main()
{
    double a = 0.5;    // przedział [a,b] do sprawdzenia czy znajduje sie w nim pierwiastek funkcji
    double b = 2;
    double c;
    double epsilon = 0.000001;     // dokladnosc wyniku

    while(abs(a-b) > epsilon)
    {
        c = (a+b) * 0.5;

        if(func(c) <= epsilon)
        {
            break;
        }

        if(func(a) * func(c) < 0)
        {
            b = c;
        }
        else if(func(b) * func(c) < 0)
        {
            a = c;
        }
    }

    cout << setprecision(4) << c;

    return 0;
}