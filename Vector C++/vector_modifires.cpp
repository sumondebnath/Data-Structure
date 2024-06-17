#include<bits/stdc++.h>
using namespace std;

int main(){

    // vector<int> x={10, 20, 30};
    // vector<int> v={11, 22, 33};
    // v = x;
    // v.assign(x);

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    v.pop_back();
    v.pop_back();

    cout<<"First value : "<<v.front()<<endl;
    cout<<"last value : "<<v.back()<<endl;

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<< " ";
    }
    cout<<endl;

    return 0;
}