
/*
              [space,star,space]
    *         [  4  , 1  ,  4  ]
   ***        [  3  , 3  ,  3  ]
  *****       [  2  , 5  ,  2  ]
 *******      [  1  , 7  ,  1  ]
*********     [  0  , 9  ,  0  ]
if n=5      [ n-i+1 ,2i+1 ,n-i+1  ]

*/

#include <iostream>
using namespace std;

void printPat(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "* ";
        }

        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
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