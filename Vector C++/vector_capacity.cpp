#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>v;

    cout<<v.size()<<endl;

    cout<<v.capacity()<<endl;

    cout<<v.max_size()<<endl;

    cout<<v.empty()<<endl;

    v.clear();

    v.resize(2);            // vector size two
    v.resize(7, 100);       // vector size 7 and value 100 in all index.

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";                    // output :  0 0 100 100 100 100 100
    }

    return 0;
}