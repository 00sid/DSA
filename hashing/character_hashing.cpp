#include <iostream>
#include <string.h>
using namespace std;

// for lower and uppercase letter use ASCII code for hash
int main()
{
    string val = "abcdabac";
    int hash[26] = {0}; // since alphabet are 26
    for (int i = 0; i < val.length(); i++)
    {
        hash[val[i] - 'a'] += 1;
    }
    cout << hash[0] << endl;
    return 0;
}