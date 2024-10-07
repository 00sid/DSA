#include <iostream>
#include <string.h>
using namespace std;

void checkPalin(string name, int i, string val) // i is used for pointer
{
    if (i >= name.length() / 2)
    {
        if (name == val)
        {
            cout << "String is palin" << endl;
        }
        else
        {
            cout << "String is not palin" << endl;
        }
        return;
    }
    else
    {
        swap(name[i], name[name.length() - i - 1]);
        checkPalin(name, i + 1, val);
    }
}

// checking first and corresponding last element in string and return true or false according to the condition
bool checkPalind(string name, int i)
{
    if (i >= name.length() / 2)
    {
        return true;
    }
    else if (name[i] != name[name.length() - i - 1])
    {
        return false;
    }
    else
    {
        return checkPalind(name, i + 1);
    }
}

int main()
{
    string name = "madam";
    // checkPalin(name, 0, name);
    cout << checkPalind(name, 0);

    return 0;
}