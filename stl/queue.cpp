#include <iostream>
#include <queue>
using namespace std;
// FIFO : First in First Out
void explainQueue()
{
    queue<int> qu;
    qu.push(1); // qu->{1}
    qu.push(2); // qu->{1,2}
    qu.push(3); // qu->{1,2,3}
    qu.push(4); // qu->{1,2,3,4}
    cout << qu.back() << endl;
    qu.back() += 5; // i.e back value is 4+5=9
    cout << qu.back() << endl;
    cout << "Front value:" << qu.front() << endl;
    qu.pop(); // pop the value at first
    cout << "Front value after pop:" << qu.front() << endl;

    // swap same as stack
}
int main()
{
    explainQueue();
    return 0;
}