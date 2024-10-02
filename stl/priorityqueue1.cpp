#include <iostream>
#include <queue>
using namespace std;

void explainPQ()
{
    // max heap
    priority_queue<int> pq;
    // place high value at top
    pq.push(5);               // pq->{5}
    pq.push(2);               // pq->{5,2}
    pq.push(8);               // pq->{8,5,2}
    pq.push(1);               // pq->{8,5,2,1}
    cout << pq.top() << endl; // 8

    // min heap

    priority_queue<int, vector<int>, greater<int>> pqm;
    pqm.push(5);               // pq->{5}
    pqm.push(2);               // pq->{2,5}
    pqm.push(8);               // pq->{2,5,8}
    pqm.push(1);               // pq->{1,2,5,8}
    cout << pqm.top() << endl; // 1
}
int main()
{
    explainPQ();
    return 0;
}