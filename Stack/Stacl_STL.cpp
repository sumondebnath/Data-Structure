#include<bits/stdc++.h>
using namespace std;

int main(){
    
    stack<int> st;
    // st.push(10);
    // st.push(20);
    
    // st.pop();
    // if(!st.empty()){
    //     st.pop();
    // }

    // if(!st.empty()){
    //     cout<<st.top()<<endl;
    // }
    // cout<<st.size()<<endl;
    // cout<<st.empty()<<endl;

    

    int n; cin>>n;
    for(int i=0; i<n; i++){
        int val; cin>>val;
        st.push(val);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    return 0;
}