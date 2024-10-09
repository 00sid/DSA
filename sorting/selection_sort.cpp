#include <iostream>

// selection sort sort the array by finding the minimum element at array put at first.
// suppose arr={9,4,3,5,2} in this array first 2 is taken out put at first in place of 9 and 9 is placed out to the position of 2
//  in next step 3 is taken to the position of 4 and vice versa.

using namespace std;

int main()
{
    int tmp;
    int n = 5; // size of array
    int arr[5] = {9, 4, 3, 5, 2};

    for (int i = 0; i <= n - 2; i++)
    {
        int mini = i;
        for (int j = i; j <= n - 1; j++)
        {

            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int tmp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = tmp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}