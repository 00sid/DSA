#include <iostream>
using namespace std;

// finding prime number using the time complexity of O(sqrt(n))
void isPrime(int num)
{
    int count = 0;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
            if (num / i != i)
            {
                count++;
            }
        }
    }

    count == 2 ? cout << "Is prime" : cout << "Not prime";
}
int main()
{
    int num = 2;
    isPrime(num);
    return 0;
}