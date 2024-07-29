#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n; cin>>n;
    int arr[n];

    unordered_map<int, int> ump;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        ump[arr[i]]++;
    }

    int q; cin>>q;
    while(q--){
        int num; cin>>num;
        cout<<ump[num]<<endl;
    }


    // iterator unorder map
    for(auto it : ump){
        cout<<it.first<<" -- "<<it.second<<endl;
    }

    return 0;
}