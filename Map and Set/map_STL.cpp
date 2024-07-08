#include<bits/stdc++.h>
using namespace std;

int main(){
        // initialized
    map<string, int>mp;

        // insert in the map
    mp.insert({"sumon", 15});
    mp.insert({"debnath", 22});
    mp.insert({"manu", 43});

    mp["Sumon"] = 16;
    mp["Debnath"] = 23;
    mp["Manu"] = 44;

        // map traverse
    for(auto it=mp.begin(); it != mp.end(); it++) {
        cout<<it->first<<" "<<it->second<<endl;
    }
        // access value using key
    cout<<mp["manu"]<<endl;

        // value ache ki nai.
    if(mp.count("sumon")) cout<<"True"<<endl;
    else cout<<"False"<<endl;

    return 0;
}