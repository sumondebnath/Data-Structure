#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string sentence;
    getline(cin, sentence);

    string words;
    stringstream ss(sentence);

    map<string, int>mp;

    while(ss >> words){
        // cout<<words<<" ";
        mp[words]++;
    }

    cout<<mp["i"]<<endl;

    for(auto it=mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}