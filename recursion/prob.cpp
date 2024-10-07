#include <iostream>
using namespace std;

void printName(string name, int count)
{
    if (count == 0)
    {
        return;
    }
    else
    {
        cout << name << endl;
    }

    printName(name, count - 1);
}
void printNum(int n, int count)
// time complexity is of O(N);
// since printNum() function is being called n times;
{

    if (count == n)
    {
        return;
    }
    else
    {

        cout << count + 1 << endl;
    }
    printNum(n, count + 1);
}
void printNumRev(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        cout << n << endl;
    }
    printNumRev(n - 1);
}
void printNumBackTrack(int n, int count)
{
    if (count > n)
    {
        return;
    }
    else
    {
        printNumBackTrack(n - 1, count); //(4,1),(3,1),(2,1),(1,1)//
        // these values with function gets stored in stack form and gets executed once n reaches to 0 and then all functions with values in stack gets
        // executed in backtrack form
        cout << n << endl;
    }
}
// backtrack using +;
void printNumRevBackTrack(int n, int count)
// working of this function is also same as above . values get stored in stack form.
// once first condition is satisfied all function in stack get executed in backtrack form.
{
    if (count > n)
    {
        return;
    }
    else
    {
        printNumRevBackTrack(n, count + 1);
        cout << count << endl;
    }
}

int main()
{
    string name = "sidd";

    // printName(name, 5);
    // printNum(10, 0);
    // printNumRev(11);
    // printNumBackTrack(5, 1);
    printNumRevBackTrack(5, 1);

    return 0;
}