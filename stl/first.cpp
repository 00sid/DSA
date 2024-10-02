#include <iostream>
#include <vector>
using namespace std;

// printing vectors
void printVector(vector<int> a)
{
    for (auto itr = a.begin(); itr != a.end(); itr++)
    {
        cout << *(itr) << " ";
    }
    cout << endl;
}

// pair
void printPair()
{
    pair<int, int> p = {1, 3}; // pair is like map
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> pa = {
        1,
        {2, 3},
    }; // nested pair
    cout << pa.first << " " << pa.second.first << endl;

    pair<int, int> arr[] = {
        {
            1,
            2,
        },
        {
            2,
            3,
        },
        {
            10,
            12,
        },
    }; // array pair
    cout << arr[2].first;
}

void explainVector()
{
    vector<int> a;     // vector is like array which is dynamic i.e it's size increase and decrease on addition and removal of data in it
    a.push_back(2);    // put value
    a.emplace_back(3); // put value
    // result a={2,3}

    vector<pair<int, int>> pa;
    pa.push_back({1, 2});
    pa.emplace_back(1, 2); // we don't need to use { } to add data on it . it is automatically converted onto particular object

    vector<int> b(5, 100); // 100 is added 5 times i.e a={100,100,100,100,100,} and we add values using push_back on it and it'll added after five 100;
    vector<int> c(5);      // 0 or garbage value is added 5 times

    vector<int> a1(5, 20);

    vector<int> a2(a1); // a2 takes value of a1 i.e a2 is copy of a1
}

void accessVector()
{
    vector<int> a; // vector is like array which is dynamic i.e it's size increase and decrease on addition and removal of data in it
    a.push_back(2);
    a.push_back(5);
    a.push_back(9);
    a.push_back(12);
    a.push_back(20);
    // using array method
    cout << a[4] << endl;
    // using iterator
    vector<int>::iterator itr = a.begin(); // iterator is a pointer pointing to the memory where elements lies
    // a.begin() gives memory location of first element of a;
    // itr gets the location of first element of a and data is accessed using *(itr)
    cout << *(itr) << endl;
    itr++;
    cout << *(itr) << endl;
    itr += 2;
    cout << *(itr) << endl;
    // vector<int>::iterator it = a.end();
    // a.end() gives memory location after the element of a;i.e if a={1,2,3,} then a.end() gives the location of after 3 (not 3).

    // printing entire vector using loop

    for (vector<int>::iterator it = a.begin(); it != a.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    // using auto: auto automatically assign the data type with the help of value
    //  for eg int a= 5 and auto a = 5 is same

    for (auto it = a.begin(); it != a.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    for (auto it : a)
    {
        cout << it << " ";
    }
}

void eraseVectorElement()
{
    vector<int> a;
    a.push_back(2);
    a.push_back(5);
    a.push_back(9);
    a.push_back(12);
    a.push_back(20);
    printVector(a);     // output 2 5 9 12 20
    a.erase(a.begin()); // location of element is passed to delete element
    printVector(a);     // output 5 9 12 20

    // deleting with range (start location,end location) element are deleted from start to just before the end element

    a.erase(a.begin() + 1, a.begin() + 3);
    printVector(a); // output 5 20 ; deleted element 9 12 start is included but end is not
}

void insertInVector()
{
    vector<int> a(2, 100); // a->{100,100}
    printVector(a);
    a.insert(a.begin(), 20);     // 20 is added at the begining i.e a->{20,100,100}
    a.insert(a.begin() + 1, 30); // 30 is added to second space i.e a->{20,30,100,100}
    printVector(a);
    a.insert(a.begin() + 2, 2, 400); // a->{20,30,400,400,100,100}
    printVector(a);
    // other functions
    vector<int> b(2, 100);
    cout << b.size() << endl;
    b.pop_back();
    printVector(b);
    b.swap(a); // swap the values
    cout << "After swapping values" << endl;
    printVector(a);
    printVector(b);
}

int main()
{
    // printPair();
    // accessVector();
    // eraseVectorElement();
    insertInVector();
}