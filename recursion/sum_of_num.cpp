#include <iostream>
using namespace std;

void printSumOfNumParameterized(int n, int sum)
{

    if (n == 0)
    {

        cout << sum << endl;
        return;
    }

    printSumOfNumParameterized(n - 1, sum + n);
}
int printSumOfNumFunctional(int n)
{
    if (n == 0) // for eg n=3; it return 3+f(2) and it waits for f(2) to return value
                // then f(2) executes 2+f(1) waits for f(1)
                // then f(1) executes 1+f(0) and wait for f(0)
                // then f(0) returns 0 and f(1) returns 1+0;
                // f(2) returns 2+1+0
                // f(3) returns 3+2+1+0
    {
        return 0;
    }
    else
    {
        return n + printSumOfNumFunctional(n - 1);
    }
}
int main()
{
    int n = 3;
    // printSumOfNumParameterized(n, 0);
    cout << printSumOfNumFunctional(n);

    return 0;
}