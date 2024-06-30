#include<bits/stdc++.h>
using namespace std;

int main(){
    
    queue<int> qu;

    // qu.push(10);
    // qu.push(20);

    // cout<<qu.front()<<endl;
    // cout<<qu.back()<<endl;
    // cout<<qu.size()<<endl;
    // cout<<qu.empty()<<endl;

    int n; cin>>n;
    for(int i=0; i<n; i++){
        int val; cin>>val;
        qu.push(val);
    }

    while(!qu.empty()){
        cout<<qu.front()<<" ";
        qu.pop();
    }
    cout<<endl;

    return 0;
}