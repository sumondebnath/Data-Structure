#include<bits/stdc++.h>
using namespace std;

class MyStack{
    vector<int> v;      // Private Property.

    public:
        void Push(int val){
            v.push_back(val);
        }
        void Pop(){
            v.pop_back();
        }
        int Top(){
            return v.back();
        }
        int Size(){
            return v.size();
        }
        bool Empty(){
            if(v.size() == 0) return true;
            else return false;
        }
};

int main(){

    MyStack Stack;

    // Stack.Push(10);
    // Stack.Push(20);

    // if(!Stack.Empty()) {
    //     Stack.Pop();
    // }
    // if(!Stack.Empty()){
    //     cout<<Stack.Top()<<endl;
    // }
    // cout<<Stack.Size()<<endl;

    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        Stack.Push(x);
    }

    while (!Stack.Empty())
    {
        cout<<Stack.Top()<<" ";
        Stack.Pop();
    }
    cout<<endl;
    
    

    return 0;
}