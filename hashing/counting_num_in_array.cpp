#include <iostream>
using namespace std;

// hashing  is a technique used to map data (keys) to a fixed-size value (hash code) using a hash function
//  The primary goal is to enable efficient data retrieval, insertion, and deletion.

int main()
{
    int n = 5; // suppose size of array

    int arr[5] = {1, 2, 3, 1, 4}; // array values

    // hash function
    // precompute

    int hash[13] = {}; // suppose max number in array be 12 so, to go to 12 we need size of 13 i.e 0-12
                       // size of 10^6 of integer can be declared inside main function i.e arr[10^6] but globally upto 10^7 can be declared

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    cout << hash[4] << endl; // to find how many 1 are present in array

    return 0;
}