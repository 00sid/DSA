/*
A
AB
ABC
ABCD
ABCDE

*/
#include <iostream>
using namespace std;

void printPat(int n)
{
    for (int i = 0; i < n; i++)
    {
        int start = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << static_cast<char>(start + 64);
        
            start += 1;
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