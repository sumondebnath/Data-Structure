#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v = {50, 40, 35, 30, 32, 31, 33, 28, 25, 20};
    int val; cin>>val;
    v.push_back(val);

    // for(int val : v){
    //     cout<<val<<" ";
    // }
    // cout<<endl;

    int current_index = v.size() - 1;
    cout<<current_index<<endl;
    
    while(current_index != 0){
        int parent_index = (current_index - 1) / 2;
        // cout<<parent_index<<endl;
        if(v[parent_index] < v[current_index]){
            swap(v[parent_index], v[current_index]);
        }
        else{
            break;
        }
        current_index = parent_index;
    }


    for(int val : v){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}