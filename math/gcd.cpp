#include <iostream>
using namespace std;

void findGCD(int num1, int num2)
{
    while (num1 != num2)
    {
        if (num1 > num2)
        {
            num1 -= num2;
        }
        else
        {
            num2 -= num1;
        }
    }
    cout << num1;
}

int main()
{
    int num1 = 11, num2 = 13;
    findGCD(num1, num2);
    return 0;
}