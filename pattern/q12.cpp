/*

1        1
12      12
123    123
1234  1234
1234512345

*/

#include <iostream>
using namespace std;

void printPat(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // number
        for (int j = 0; j < i; j++)
        {
            cout << j + 1;
        }
        // space
        for (int j = 0; j < 2 * n - 2 * i; j++)
        {
            cout << " ";
        }

        // number
        for (int j = 0; j < i; j++)
        {
            cout << j + 1;
        }

        cout << endl;
    }
}

int main()
{
    int n = 4;
    printPat(n);
    return 0;
}