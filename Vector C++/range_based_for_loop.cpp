#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v = {10, 20, 30, 40, 50};

    // insert at the position
    v.insert(v.begin(), 11);        // 0 no index or pointer
    v.insert(v.begin()+4, 41);
        // range based for loop.
    for(int val : v){
        cout<<val<< " ";
    }
    cout<<endl;



    // insert multiple value in vector at any position.

    vector<int> v1 = {100, 110, 120, 130, 140, 150};
    vector<int> v2 = {51, 52, 53, 54, 55};

    v1.insert(v1.begin()+3, v2.begin(), v2.end());

    for(int val : v1){
        cout<<val<<" ";
    }
    cout<<endl;


    // erase or delete in the vector

    // v1.erase(v1.begin()+4); 
            //multiple value erase or delete.
    // v1.erase(v1.begin()+1, v1.begin()+4);
    v1.erase(v1.begin()+1, v1.end()-5);

    for(int val : v1){
        cout<<val<<" ";
    }
    cout<<endl;

        // find the value in the vector.
    vector<int> value={1, 2, 3, 4, 1 , 5, 4, 2, 3, 6, 2, 4, 5};

    auto it = find(value.begin(), value.end(), 10);

    // cout<<*it<<endl;
    if(it == value.end()) cout<<"Not Founded"<<endl;
    else cout<<" Founded"<<endl;

    return 0;
}