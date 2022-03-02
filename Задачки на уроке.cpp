#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    /*
    Составте программуб выводящую на экран квадраты чисел от 10 дв 20
    */

    /*
    for (int i = 10; i < 20; ++i)
        cout << i * i << endl;
    */
    /*
    Составте программу которая вычисляет сумму чисел от 1 до n.
    n. выводится с клавиатуры
    */
    /*
    int n, summ = 0;
        cin >> n;

    for (int i = 1; i <= n; i++)
        summ += i;

    cout  << summ << endl;
    */
    /*
    Составьте программу которая вычисляет произведение чисел от 1 до n.
    n. вводится с клавиатуры
    */
    /*
    int n, proz = 1;
    cin >> n;

    for (int i = 1; i <= n; i++)
        proz *= i;

    cout << proz << endl;
    */
    /*
    С клавиатуры выводятся 10 n чисел. Составте программу которая определяет
    кол-во отрицательных, кол-во положительных и кол-во нулей среди введеных
    чисел.Значение n вводится с клавиатуры
    */
    /*
    int n;
    int num = 0;
    int i = 0;
    int minus = 0, plus = 0, nolb = 0;
    cout << "Введите n: ";
    cin >> n;
    while (i < n) {
        cout << "Введите число: ";
        cin >> num;
        if (num > 0) plus++;
        if (num < 0) minus++;
        if (num == 0) nolb++;
        i++;
    }
    cout << "Положительных: " << plus << endl;
    cout << "Отрицательных: " << minus << endl;
    cout << "Нулевых: " << nolb << endl;
    */
    int poz = 0, neg = 0, zero = 0,n;
    for (int i = 0; i < 10; i++)
    {
        cin >> n; 
        if (n > 0) poz++;
        else if (n < 0) neg++;
        else if (n == 0) zero++;
    }
    cout << poz << endl;
    cout << neg << endl;
    cout << zero << endl;
}
