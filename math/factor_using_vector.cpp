#include <iostream>
#include <vector>

using namespace std;

void findFactor(int num)
{
    vector<int> ls;
    for (int i = 1; i * i <= num; i++) // time complexity=O(sqrt n)
    {                                  // squart is function which take some time so it increases time complexity
        if (num % i == 0)
        {
            if (num / i != i)
            {
                ls.push_back(i);
                ls.push_back(num / i);
            }
            else
            {
                ls.push_back(i);
            }
        }
    }
    // O(no. of factors *log(no. of factors))
    sort(ls.begin(), ls.end());
    // O(no. of factors)
    for (auto it : ls)
    {
        cout << it << " ";
    }
}

int main()
{
    int num = 36;
    findFactor(num);
    return 0;
}