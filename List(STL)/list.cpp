#include <bits/stdc++.h>
using namespace std;

int main()
{

    // list<int> myList;           // initialize

    // list<int> myList(10);           // initialize with size

    // list<int> myList(10, 100);      // initialize with size and value.

    // list<int> List(myList);             // copy list inside to another list.

    // list<int> myList(arr, arr+n);        //   copy array in list.

    list<int> myList = {10, 20, 30, 40, 50};

    myList.push_front(100);
    myList.push_back(200);

    cout << myList.front() << endl;
    cout << myList.back() << endl;

    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << myList.size() << endl;
    cout << myList.max_size() << endl;

    myList.pop_front();
    myList.pop_back();

    myList.remove(10);
    myList.sort(greater<int>()); // desending order.
    myList.unique();
    myList.reverse();

    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}