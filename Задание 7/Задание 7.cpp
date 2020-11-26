using namespace std;
#include <ctime>
#include <iostream>


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
		a[i] = rand() % 30;
		cout << a[i] << " ";
	}
	cout << "\n";

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i] % 2 == 0)
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
