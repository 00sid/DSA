/*

1.*
2.* *
3.* * *
4.* * * *
5.* * * * *    0 to 4 use one logic and after use another
6.* * * *
7.* * *
8.* *
9.*


*/

#include <iostream>
using namespace std;

void printPat(int n)
{
    for (int i = 0; i < 2 * n; i++)
    {
        if (i < n)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int j = 0; j < 2 * n - i - 1; j++)
            {
                cout << "* ";
            }
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