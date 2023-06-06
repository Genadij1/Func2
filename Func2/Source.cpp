#include <iostream>
#include <cstdlib>
using namespace std;

void sortArr(int arr, int SIZE);

int main()
{
	const int SIZE = 10;
	int arr[SIZE]{ 5,4,3,2,1,6,7,8,9,10 };
	sortArr(arr[SIZE], SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}

	system("pause>nul");
	return 0;
}

void sortArr(int arr, int SIZE)
{
	for (int i = 0; i < (SIZE / 2); i++)
	{
		for (int j = 0; j < (SIZE / 2 - i)-1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				swap(arr[j + 1], arr[j]);

			}
		}
	}
}