#include <iostream>
#include <array>
using namespace std;

void revArr(int i, int arr[], int n)
{
    if (i >= n / 2)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << endl;
        }
        return;
    }
    else
    {
        swap(arr[i], arr[n - i - 1]); // here i is pointer which is used to swap values from first with its corresponding last value;
        revArr(i + 1, arr, n);
    }
}

int main()
{
    int n = 3;
    int arr[3] = {1, 2, 3};
    revArr(0, arr, n);
    return 0;
}
