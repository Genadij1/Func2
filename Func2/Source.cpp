#include <iostream>
#include <cstdlib>
using namespace std;

void sorted(int arr[], int SIZE, bool d)
{
    if (d == false) {
        for (int i = 0; i < SIZE - 1; i++) {
            for (int j = 0; j < SIZE - i - 1; j++) {
                if (arr[j] < arr[j + 1]) {
                    swap(arr[j + 1], arr[j]);
                }
            }
        }
    }
    else  {
        for (int i = 0; i < SIZE - 1; i++) {
            for (int j = 0; j < SIZE - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j + 1], arr[j]);
                }
            }
        }
    }
        for (int i = 0; i < SIZE; i++) {
            cout << arr[i] << " ";
        }
}

int main()
{
    int a;
    bool d;
    const int SIZE = 10;
    int arr[SIZE]{ 4,6,-1,5,8,9,0,7,7,1 };
    cout << "Enter 1 to indicate true or 2 to indicate false: ";
    cin >> a;
    if (a == 1) {
        sorted(arr, SIZE, d=false);
    }
    else {
        sorted(arr, SIZE, d = true);
    }

	system("pause>nul");
	return 0;
}

