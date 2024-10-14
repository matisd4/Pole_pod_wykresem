import math

def func1(x):
    return x ** 2

def func2(x):
    return math.sin(x)

def main():
    # metoda pol trapezow
    a = 0
    b = 0.875  # wartosc wyliczona uzywajac bisekcje, jest to pierwiastek funkcji x^2 - sin(x)
    dx = 0.005  # od tej zmiennej zalezy na ile trapezow zostanie podzielony przedzial [a, b]
    pole_pierwsze = 0.0  # pole pod wykresem funkcji x^2
    pole_drugie = 0.0    # pole pod wykresem funkcji sin(x)

    x = a

    while x < b:
        pole_pierwsze += (func1(x) + func1(x + dx)) * 0.5 * dx
        pole_drugie += (func2(x) + func2(x + dx)) * 0.5 * dx

        x += dx

    print(f"Pole miedzy wykresami sin(x) i x^2 wynosi: {abs(pole_pierwsze - pole_drugie):.4f}")

if __name__ == "__main__":
    main()