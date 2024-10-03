#include <iostream>
using namespace std;

void revNum(int num)
{
    int tmp = num, rev = 0, rem;
    while (tmp != 0)
    {
        rem = tmp % 10;
        rev = rev * 10 + rem;
        tmp /= 10;
    }
    cout << "Reverse of " << num << " is " << rev << endl;
}

int main()
{

    int num = 1453;
    revNum(num);
    return 0;
}