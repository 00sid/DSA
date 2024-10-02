#include <iostream>
#include <deque>
using namespace std;

void explainDeque()
{
    deque<int> dq;
    dq.push_back(2);
    dq.emplace_back(3);
    dq.push_front(4);
    dq.emplace_front(3);

    dq.pop_back();
    dq.pop_front();
}

int main()
{
    return 0;
}