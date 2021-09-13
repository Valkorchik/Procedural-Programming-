/*
//1.2
 #include <iostream>
using namespace std;
int a, b;
int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите первое число \n";
    cin >> a;
    cout << "Введите второе число \n";
    cin >> b;
    cout << "Ваша сумма, разность, произведение и деление...\n";
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    if (b != 0) {
        cout << a % b;
    }
    return 0;
}*/
//1.3
/*#include <iostream>
using namespace std;
int b, c, x;
int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите b и с " << endl;
    cin >> b;
    cin >> c;
    if (b != 0) {
        x = -(c / b);
        cout << x;
    }
    if (c == 0 and b == 0) {
        cout << "Любое x";
    }
    return 0;
}*/
/*
//1.4
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int a, b, c, d, x1, x2,x3;
int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите a,b,c" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    d = pow(b, 2) * (-4 * a * c);
    x3 = -(b / c);
    if (a == 0) {
        cout <<"Корень "<<x3;
    }
    else
    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << x1 << " " << x2 << endl;
        cout << "Корни" << x1 << " " << x2;
    }
    else
    if (d == 0) {
        cout << "Корень:" << " " << -b / (2 * a) << endl;
    }
    else
        cout << "Нет корней" << endl;
    return 0;
}*/
//1.5

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"rus");
    bool day, curtains, lamp;
    cout << "Введите значения:\n";
    cin >> day >> curtains >> lamp;
    if (lamp) {
        cout << "Светло";
    }
    else if (day & curtains) {
        cout << "Светло";
    }
    else {
        cout << "Темно";
    }
    return 0;
}