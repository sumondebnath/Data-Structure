/*
    Time Complexity : O(1) avarage case
                worst case : O(N)
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    unordered_map<int, string> ump;

    ump.insert({1, "sumon"});
    ump[1] = "manu";
    ump[2] = "debnath";

    for (auto it : ump)
    {
        cout << it.first << " " << it.second << endl;
    }

    for (auto it = ump.begin(); it != ump.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}