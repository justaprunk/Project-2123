#include <iostream>
using namespace std;

int main()
{
	int const n = 4; //������ ����������
	int value;
	int array[n];


	cout << "Enter value:" << endl; //���� �������� ��� ��������
	cin >> value;

	cout << "Enter the array:" << endl; //���� �������
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}

	for (int i = 0; i < n; i++) //���� �������� ������� �� ������� ��������� �����
	{
		if (array[i] == value)
		{
			return i;
		}
	};
	return -1;
}