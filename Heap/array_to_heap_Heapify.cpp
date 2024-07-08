#include<bits/stdc++.h>
using namespace std;

class Array_Heap{
    vector<int>v;
    public:
    Array_Heap(){

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

    //O(n)
    void buildHeapFromArray(vector<int>&arr){
        v = arr;
        int n = v.size();
        int lastNonLeafNode = n/2-1;

        for(int i = lastNonLeafNode;i>=0;i--){
            down_heapify(i);
        }
    }

    void printHeap(){
        for(int val:v){
            cout<<val<<" ";
        }
        cout<<'\n';
    }
};

int main(){

    Array_Heap heap;

    vector<int> arr;
    int n; cin>>n;
    while (n--)
    {
        int val; cin>>val;
        arr.push_back(val);
    }
    

    heap.buildHeapFromArray(arr);
    heap.printHeap(); 
    
    return 0;
}