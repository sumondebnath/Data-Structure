#include<bits/stdc++.h>
using namespace std;

int main(){
    
    map<int, string> mp;

    mp.insert({1, "sumon"});
    mp.insert({2, "debnath"});

    mp[3] = "sumon debnath";        // O(log N)

    mp.erase(1);

    cout<<mp[1]<<endl;

    for(auto it : mp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}