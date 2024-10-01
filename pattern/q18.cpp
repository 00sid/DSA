/*
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/

#include <iostream>
using namespace std;

void printPat(int n)
{
    // first
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * n - 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // second
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= (2 * n - 2 * i) / 2; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * n - 2 * i) / 2; j++)
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