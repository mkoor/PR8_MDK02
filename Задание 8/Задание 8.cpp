using namespace std;
#include <ctime>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");

	int* a, n;
	cout << "азмерность массива: " << endl;
	cin >> n;
	a = new int[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 20;
		cout << a[i] << " ";
	}
	cout << "\n";

	int b, c;
	cout << "Введите начало и конец интервала: ";
	cin >> b >> c;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i] >= b && a[i] <= c)
			{
				a[i] = a[n - 1];
				n--;
			}
		}
	}
	cout << "Измененный массив: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	delete[]a;

	return 0;
}