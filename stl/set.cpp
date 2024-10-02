#include <iostream>
#include <set>
using namespace std;
// set stores unique values in sorted order
void explainSet()
{
    set<int> s;
    s.insert(1);  // s->{1}
    s.emplace(2); // s->{1,2}
    s.insert(2);  // s->{1,2}
    s.insert(4);  // s->{1,2,4}
    s.insert(3);  // s->{1,2,3,4}

    // begin(), end(), rbegin(), rend(), size()
    // empty() and swap() are same as above

    auto it = s.find(3);    // give memory location of 3
    auto it1 = s.find(6);   // give memory location right after the end element
    s.erase(4);             // removes 4 & uses logarithmic time
    int count = s.count(1); // gives value 1 if 1 is present in s else gives 0
    auto it2 = s.find(3);
    s.erase(it2); // can erase value using memory address
    // erasing elements like in vector

    // if s->{1,2,3,4}
    auto it3 = s.find(2); // start
    auto it4 = s.find(4); // end
    s.erase(it3, it4);    // 2 & 3 are erased . end value remains

    // upper and lower bound

    set<int> mySet = {1, 3, 5, 7, 9};
    auto itr1 = mySet.lower_bound(5); // returns an iterator to the first element that is not less than 5, which is 5 itself.
    cout << "lower bound:" << *(itr1) << endl;
    auto itr2 = mySet.upper_bound(5);
    cout << "upper bound:" << *(itr2) << endl; // upper_bound(5) returns an iterator to the first element that is greater than 5, which is 7.
}
int main()
{
    explainSet();
    return 0;
}