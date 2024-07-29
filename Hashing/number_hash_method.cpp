#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

        // precompute
    int hash[15] = {0};
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    int t; cin>>t;
    while(t--){
        int num; cin>>num;
            // Fetching
        cout<<"The Count Of "<<num<<" is : "<<hash[num]<<endl;
    }

    return 0;
}