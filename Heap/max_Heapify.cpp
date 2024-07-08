#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
    vector<int> v;
public:
    MaxHeap(){

    }

    void up_heapify(int index){
        while(0<index && v[index]>v[(index-1)/2]){
            swap(v[index],v[(index-1)/2]);
            index = (index-1)/2;
        }

    }

    //O(logn)
    void push(int val){
        v.push_back(val);
        up_heapify(v.size()-1);        
    }

    void printHeap(){
        for(int val:v){
            cout<<val<<" ";
        }
        cout<<'\n';
    }

    void down_heapify(int index){
        while(true){
            int largest = index;
            int left = 2*index+1;
            int right = 2*index+2;

            if(left<v.size() && v[largest]<v[left]){
                largest = left;
            }
            if(right<v.size() && v[largest]<v[right]){
                largest = right;
            }
            if(largest==index) break;

            swap(v[index],v[largest]);
            index = largest;
        }

    }

    //O(logn)
    void pop(int index){
        swap(v[index],v[v.size()-1]);
        v.pop_back();
        down_heapify(index);
    }

    //O(1)
    int getMax(){
        return v[0];
    }

    


};

int main(){
    MaxHeap mx;
    int n; cin>>n;
    while(n--){
        int val; cin>>val;
        mx.push(val);
    }

    mx.printHeap();

    cout<<mx.getMax()<<endl;

    mx.pop(0);

    mx.printHeap();

    cout<<mx.getMax()<<endl;

            
              
    return 0;
}