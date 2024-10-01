/*

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/
#include <iostream>
using namespace std;

void printPat(int n)
{
    // first
    for (int i = 0; i < n; i++)
    {
        // char
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }

        // char
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    // second
    for (int i = 1; i <= n; i++)
    {
        // char
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= 2 * n - 2 * i; j++)
        {
            cout << " ";
        }

        // char
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
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