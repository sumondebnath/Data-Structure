#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string str; cin>>str;

    int hash[26] = {0};
    // int hash[256] = {0};
    for(int i=0; i<str.size(); i++){
        hash[str[i] - 'a']++;
        // hash[str[i]]++;
    }

    int t; cin>>t;
    while(t--) {
        char x; cin>>x;

        cout<<hash[x - 'a']<<endl;
        // cout<<hash[x]<<endl;
    }

    return 0;
}