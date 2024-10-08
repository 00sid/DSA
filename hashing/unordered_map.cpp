#include <iostream>
#include <map>
using namespace std;

// map is used to store large values
int main()
{
    int n = 5; // suppose size of array

    int arr[5] = {1, 2, 3, 1, 4};
    unordered_map<int, int> mpp; // map<key, value>i.e like 1->2 from above eg; value is frequency
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        cout << it.first << " => " << it.second << endl;
    }

    return 0;
}

// NOTE:- time complexity for storing and fetching data is O(1) in all case but at worst case which is very rare is 0(N) where N is
// number of elements in map