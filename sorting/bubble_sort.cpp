// bubble sort sort the array by comparing two adjacent element in array and swapping them if first is greater than second element;
// for eg arr={13,46,24,52,20,9}
// in first step 13 and 46 is compared then no swapping takes place then in 2nd step 46 and 24 is compared then it is swapped since 24 is smaller than 46
// in 3rd step 46 and 52 is compared then no swapping takes place and then 52 and 20 is compared then swapped and again 52 and 9 is compared
// then it is swapped . then first round is completed.
// so we can say that largest element is placed at last index at each round

#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int n = 6; // size of array
               // int arr[] = {13, 46, 24, 52, 20, 9};
    int arr[] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < n; i++)
    {
        int didSwap = 0;
        for (int j = 0; j < n - i; j++)
        {
            if (j == n - i)
            {
                break;
            }
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
        cout << "runs" << endl;
    }
    printArr(arr, n);
}

// time complexity for worst and average case is O(N^2)

// time complexity for best case which means array is already sorted case is O(N)
