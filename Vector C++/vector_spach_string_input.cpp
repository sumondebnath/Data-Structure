#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    cin.ignore();

    vector<string> str;

    for(int i=0; i<n; i++){
        string s;
        getline(cin, s);
        str.push_back(s);
    }

    for(string st : str){
        cout<<st<<endl;
    }
    
    return 0;
}