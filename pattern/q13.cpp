/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/
#include <iostream>
using namespace std;

void printPat(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start += 1;
        }
        cout << endl;
    }
}

int main()
{
    int n = 6;
    printPat(n);
    return 0;
}