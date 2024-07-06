#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> v = {10, 20, 30, 35, 40, 45, 50, 52, 55};
    int val; cin>>val;
    v.push_back(val);

    int current_index = v.size()-1;

    while(current_index != 0){
        int parent_index = (current_index - 1) / 2;
        if(v[parent_index] > v[current_index]){
            swap(v[parent_index], v[current_index]);
        }
        else{
            break;
        }
        current_index = parent_index;
    }

    for(int val:v){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}