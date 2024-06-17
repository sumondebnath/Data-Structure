#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v= {10, 20, 30, 40, 50, 60};

    // vector<int> :: iterator it;                 // initialization iterator

    for(auto it=v.begin(); it<v.end(); it++){
        cout<<*it<<" ";                         // print iterator using loop
    }
    cout<<endl;


    return 0;
}