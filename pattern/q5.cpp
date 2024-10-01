/*

* * * * *
* * * *
* * *
* *
*

*/

#include <iostream>
using namespace std;

void printPat1(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void printPat2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    //  printPat1(n);
    printPat2(n);
    return 0;
}