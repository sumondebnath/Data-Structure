#include<bits/stdc++.h>
using namespace std;

int main(){
    
    set<int> s;
    int n; cin>>n;

    while(n--){
        int x; cin>>x;
        s.insert(x);
    }

    for(auto it = s.begin(); it != s.end(); it++) {
        cout<<*it<<endl;
    }

    if(s.count(10)) cout<<"True"<<endl;
    else cout<<"False"<<endl;

    return 0;
}