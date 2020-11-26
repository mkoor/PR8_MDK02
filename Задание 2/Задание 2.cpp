#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int k = 10;
    int b;
    int c;

    int a[k] = { 3, 7, 64, 9, 27, 31, 28, 55, 5, 11 };

    cout << "Введите начало и конец интервала: ";
    cin >> b >> c;

    cout << "Элементы: ";

    for (int i = 0; i < k; i++)
    {
        if (a[i] < b || a[i] > c)
        {
            cout << a[i] << " ";
        }
    }

    cout << endl;

    return 0;
}