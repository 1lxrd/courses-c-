#include <iostream>

using namespace std;

int main()

{
	int arr[5];
	int max;
	int min;

	for (int i = 0; i < 5;i++) //���� �����
	{
		cin >> arr[i];
		if (i == 0)
		{
			max = arr[i]; // 1�� ��������� ������� - ���� � �����������
			min = max;
		}
		max = arr[i] > max ? arr[i] : max; // ��������� ���������� � ������������� ����� �������� �� ����
		min = arr[i] < min ? arr[i] : min; // ��������� ��������� � ������������
	}

	cout << max - min << endl;


}