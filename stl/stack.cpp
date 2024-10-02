#include <iostream>
#include <stack>
using namespace std;

void explainStack()
{
    stack<int> st;
    st.push(2); // st->{2}
    st.push(3); // st->{3,2}
    st.push(4); // st->{4,3,2}
    st.push(5); // st->{5,4,3,2}
    st.push(6); // st->{6,5,4,3,2}
    cout << "Size:" << st.size() << endl;
    cout << "Top element:" << st.top() << endl; // 6
    st.pop();
    cout << "Top element after pop:" << st.top() << endl; // 5
    cout << st.empty() << endl;                           // bool to check isEmpty or not gives 0 for non empty and 1 for empty
    stack<int> st1, st2;
    st1.swap(st2);               // swap the values
    cout << st1.empty() << endl; // gives 1
}
int main()
{
    explainStack();
    return 0;
}