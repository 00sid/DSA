/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

#include <iostream>
using namespace std;

void printPat(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    printPat(n);
    return 0;
}