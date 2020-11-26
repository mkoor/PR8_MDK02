using namespace std;
#include <iostream>
#include <ctime>

int main()
{
	setlocale(LC_ALL, "Russian");

	srand(time(NULL));

	const int k = 10;
	int a[k];

	for (int i = 0; i < k; i++)
	{
		a[i] = rand() % (-10) + (-30);
		cout << a[i] << " ";
	}
	cout << "\n";

	int max = a[0];
	int num2;
	for (int i = 0; i < k; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			num2 = i;
		}
	}

	cout << "Максимальный элемент массива = " << max << endl;

	return 0;
}