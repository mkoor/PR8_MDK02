using namespace std;
#include <iostream>
#include<ctime>

int main()
{
	setlocale(LC_ALL, "Russian");
    int* a, n;
    cout << "Размерность массива: " << endl;
    cin >> n;
    a = new int[n];
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 5;
        cout << a[i] << " ";
    }
    cout << "\n";

    int min = a[0];
    int ind = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] <= min)
        {
            min = a[i];
            ind = i;
        }
    }

    cout << "Последний минимальный элемент: " << min << "\n";
    cout << "Индекс последний минимального элемента: " << ind << endl;
    return 0;
}