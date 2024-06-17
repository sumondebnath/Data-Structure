#include<bits/stdc++.h>
using namespace std;

int main(){

    // vector<int> v;       // initialize vector

    // vector<int>v(5);     // vector with size

    // vector<int> v(5, 1);     // size with value

    // vector<int> v1(10, 100);     
    // vector<int>v(v1);            // copy another vector

    // int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};      // copy array with size.
    // vector<int> v(a, a+10);

    vector<int> v = {10, 20, 30};

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<v.size()<<endl;

    return 0;
}