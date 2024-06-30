#include<bits/stdc++.h>
using namespace std;

class myQueue{
    list<int> myList;

    public:
    void Push(int val){
        myList.push_back(val);
    }
    void Pop(){
        myList.pop_front();
    }
    int Front(){
        return myList.front();
    }
    int Size(){
        return myList.size();
    }
    bool Empty(){
        // if(myList.empty()) return true;
        // else return false;
        return myList.empty();
    }
};

int main(){

    myQueue qu;

    int n; cin>>n;
    for(int i=0; i<n; i++){
        int val; cin>>val;
        qu.Push(val);
    }

    while(!qu.Empty()){
        cout<<qu.Front()<<" ";
        qu.Pop();
    }
    cout<<endl;
    
    return 0;
}