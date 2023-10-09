#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int a, b, c;
    cout << "Введите координаты точек a, b, c:" << endl;
    cin >> a >> b >> c;
    // Сначала я просто добавил в конце else (если максимальная длинна не находилась)
    if ((a == b) || (a == c) || (b == c))
    {
        cout << "Все координаты должны быть различны";
        return 1;
    }
    int ab = abs(a - b);
    int bc = abs(b - c);
    int ac = abs(a - c);
    cout << "ab = " << ab << endl << "bc = " << bc << endl << "ac = " << ac << endl;
    if((ab > bc) && (ab > ac))
    {
        cout << "Максимальная длина отрезков ab = " << ab;
    }
    else if ((bc > ab) && (bc > ac))
    {
        cout << "Максимальная длина отрезков bc = " << bc;
    }
    if ((ac > bc) && (ac > ab))
    {
        cout << "Максимальная длина отрезков ac = " << ac;
    }
}