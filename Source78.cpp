#include <iostream>
using namespace std;

int LinearSearch(int value, int* array);
	
int main()
{
	int const n = 4;
	int value;
	int array[n];


	cout << "Enter value:" << endl;
	cin >> value;

	cout << "Enter the array:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
cout << LinearSearch(value, array) << endl;
};
	
int LinearSearch(int value, int* array)
{
	int n = sizeof;
	
	for (int i = 0; i < n; i++)
	{
		if (array[i] == value)
		{
			return i;
		}
	}
	return -1;
}
