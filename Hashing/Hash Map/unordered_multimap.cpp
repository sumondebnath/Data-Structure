#include<bits/stdc++.h>
using namespace std;

int main(){
    
    unordered_multimap<int, string> mpp;

    mpp.insert({1, "sumon"});
    mpp.insert({1, "debnath"});
    mpp.insert({1, "manu"});

    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}