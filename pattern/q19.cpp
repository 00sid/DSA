/*

* * * *
*     *
*     *
* * * *


*/
#include <iostream>
using namespace std;

void printPat(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n)
            {
                cout << "* ";
            }
            else
            {
                if (j == 1 || j == n)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        std::cout << endl;
    }
}

int main()
{
    int n = 4;
    printPat(n);
    return 0;
}