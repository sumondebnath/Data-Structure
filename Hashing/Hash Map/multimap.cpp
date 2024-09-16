/*
    Time Complexity : O(log N)
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    multimap<int, string> mpp;

    mpp.insert({2, "manu"});
    mpp.insert({1, "sumon"});
    mpp.insert({2, "debnath"});

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}