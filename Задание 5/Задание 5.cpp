using namespace std;
#include <iostream>
#include<ctime>

int main()
{
	setlocale(LC_ALL, "Russian");
    srand(time(NULL));

    int** a, n, m;
    cout << "Введите размерность двумерного массива: " << endl;
    cin >> n;
    m = n;

    a = new int* [n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[m];
    }
    cout << "Ваш массив: " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = rand() % 10;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Среднее арифметическое ниже главной диагонали массива: " << arif(a, n, m) << endl;

}

int arif(int** a, int n, int m)
{
    int s = 0, k = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 2; j >= 0; j--)
        {
            if (a[i][j] % 2 == 0)
            {
                s += a[i][j];
                k++;
            }
        }
        m--;
    }
    if (k == 0)
    {
        return 0;
    }
    return (s / k);
}