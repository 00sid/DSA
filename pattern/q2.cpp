/*
*
* *
* * *
* * * *
* * * * *

*/
#include <iostream>
using namespace std;

void printPat(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
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