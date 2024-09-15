#include<bits/stdc++.h>
using namespace std;

int main(){
    
    map<int, string, greater<int>> mpp;

    mpp.insert({1, "sumon"});
    mpp.insert({2, "debnath"});     // O(log N)

    mpp[3] = "sumon debnath";       // o(log N)

    for(auto it : mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}