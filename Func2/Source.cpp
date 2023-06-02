#include <iostream>
#include <cstdlib>
using namespace std;

void sorted(int arr[], int SIZE, bool d);

int main()
{
	bool d = false;
	const int SIZE = 10;
	int arr[SIZE]{ 4,6,-1,5,8,9,0,10,7,1};
	sorted(arr, SIZE, d);


	system("pause>nul");
	return 0;
}
void sorted(int arr[], int SIZE, bool d) 
{
	for (int i = 0; i < SIZE-1; i++) 
	{
		int temp = arr[i];
		if(arr[i]<arr[i+1]){
			arr[i] = arr[i + 1];
			temp = arr[i + 1];
		}
		cout << arr[i];
	}
}