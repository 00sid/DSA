// in this sorting technique for eg arr={14,9,15,12,6,8,13}
//  first 14 then 14 and 9 is checked and compared and swapped
//  then again 9 14 15 is checked and compared
// again 9 14 15 12 are checked then index of 14 and 15 are incremented by 1 and12 is placed at the place of 14.
// again 9 12 14 15 6 are compared and same steps are used

#include <iostream>
using namespace std;
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

void insertion_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int tmp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = tmp;
            j--;
        }
    }
    printArr(arr, n);
}
int main()
{
    int n = 7;
    int arr[] = {14, 9, 15, 12, 6, 8, 13};
    insertion_sort(arr, n);

    return 0;
}