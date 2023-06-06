#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void enterArr(int arr[], int SIZE);
void firstArr(int arr[], int SIZE);

int main()
{
	srand(time(NULL));
	const int SIZE = 20;
	int arr[SIZE];
	enterArr(arr, SIZE);

	cout << "Arr: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " |";
	}

	firstArr(arr, SIZE);

	system("pause>nul");
	return 0;
}

void enterArr(int arr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 40-20;
	}
}
void firstArr(int arr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		int start = arr[0];
		int end = arr[9];

		if (arr[i] < 1)
		{
			start = arr[i];

		}
	}
}