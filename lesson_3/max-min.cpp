#include <iostream>

using namespace std;

int main()

{
	int arr[5];
	int max;
	int min;

	for (int i = 0; i < 5;i++) //ввод чисел
	{
		cin >> arr[i];
		if (i == 0)
		{
			max = arr[i]; // 1ый введенный элемент - макс и минимальный
			min = max;
		}
		max = arr[i] > max ? arr[i] : max; // сравнение введенного и максимального среди введеных до него
		min = arr[i] < min ? arr[i] : min; // сравнение введеного и минимального
	}

	cout << max - min << endl;


}