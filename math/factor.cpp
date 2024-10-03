#include <iostream>
#include <math.h>
using namespace std;

void findFactor(int num)
{
    for (int i = 1; i <= int(sqrt(num)); i++)
    {
        if (num % i == 0)
        {
            int quo = num / i;
            if (quo == i)
            {
                cout << quo << " ";
            }
            else
            {

                cout << i << " " << quo << " ";
            }
        }
    }
}
int main()
{
    int num = 36;
    findFactor(num);
    return 0;
}