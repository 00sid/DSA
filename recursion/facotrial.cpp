#include <iostream>
using namespace std;

// functional recursion
int fact(int n)
{
    if (n == 0) // first 3*f(2)
                // second 2*f(1)
                // third 1*f(0)
                // f(0) returns 1;
                // f(1) returns 1*1
                // similarly f(3) returns 3*2*1*1
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int n = 3;
    cout << fact(n) << endl;
    return 0;
}