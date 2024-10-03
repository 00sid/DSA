#include <iostream>
using namespace std;

void countDigit(int num)
{
    int count = 0, tmp = num;
    while (tmp != 0)
    {

        /* code */
        count++;
        tmp = tmp / 10;
    }
    cout << "No. of digits in " << num << ": " << count << endl; // time complexity is O(log base 10 (N))
    // this is due to division of num by 10 in loop . if 2 was used for division then time complexity would be  O(log base 2 (N))
}

int main()
{
    int num = 10111;
    countDigit(num);
    return 0;
}