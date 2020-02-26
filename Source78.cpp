#include <iostream>
using namespace std;

int main()
{
	int const n = 4; //раздел переменных
	int value;
	int array[n];


	cout << "Enter value:" << endl; //ввод значения для проверки
	cin >> value;

	cout << "Enter the array:" << endl; //ввод массива
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}

	for (int i = 0; i < n; i++) //цикл проверки массива на наличие заданного числа
	{
		if (array[i] == value)
		{
			return i;
		}
	};
	return -1;
}