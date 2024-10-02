#include <iostream>
#include <set>
using namespace std;
// multiset
//  everything is same as set
//  but it also store duplicate values
void explainMultiSet()
{
    multiset<int> s;
    s.insert(1);        // s->{1}
    s.insert(1);        // s->{1,1}
    s.insert(1);        // s->{1,1,1}
    s.erase(1);         // all 1's are erased
    s.erase(s.find(1)); // only 1 is erased
}
int main()
{
    explainMultiSet();
    return 0;
}