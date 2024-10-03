#include <iostream>
#include <map>
using namespace std;

// map stores values in form of key which is unique and their corresponding values.keys are in sorted form

void explainMap()
{
    map<int, int> mpp1; //<key,values>
    mpp1[1] = 10;
    mpp1.emplace(3, 12);
    mpp1.insert({2, 12});

    for (auto itr : mpp1)
    {
        cout << itr.first << " " << itr.second << endl;
    }
    // output
    //  1 10
    //  2 12
    //   3 12
    map<int, pair<int, int>> mpp2;
    mpp2[1] = {1, 2};
    map<pair<int, int>, int> mpp3;

    mpp3[{1, 2}] = 10;
}

int main()
{
    explainMap();
    return 0;
}