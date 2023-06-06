#include <iostream>
#include <cstdlib>
using namespace std;

void sort(int arr[], int SIZE);
void sort2(int arr[], int SIZE);

int main()
{
	const int SIZE = 10;
	int arr[SIZE]{ 12,5,7,4,8,0,6,5,43,7 };
	sort(arr, SIZE);
	sort2(arr, SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}

	system("pause>nul");
	return 0;
}

void sort(int arr[], int SIZE)
{
	for (int i = 0; i < (SIZE / 2) - 1; i++)
	{
		for (int j = 0; j < (SIZE / 2) - i - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				swap(arr[j + 1], arr[j]);
			}
		}
	}
}
void sort2(int arr[], int SIZE)
{
	for (int i = 5; i < SIZE-1; i++)
	{
		for (int j = 5; j < SIZE-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j + 1], arr[j]);
			}
		}
	}
}
