import math

def func(x):
    return x**2 - math.sin(x)

def main():
    a = 0.5  # interval [a,b] to check if it contains a root of the function
    b = 2
    epsilon = 0.000001  # precision of the result

    while abs(a - b) > epsilon:
        c = (a + b) * 0.5

        if abs(func(c)) <= epsilon:
            break

        if func(a) * func(c) < 0:
            b = c
        elif func(b) * func(c) < 0:
            a = c

    print(f"{c:.4f}")

if __name__ == "__main__":
    main()