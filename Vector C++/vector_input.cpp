#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;

            // type -1
    // vector<int> v;

    // for(int i=0; i<n; i++){
    //     int in; cin>>in;
    //     v.push_back(in);
    // }

            //type -2
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    
    for(int val : v){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}