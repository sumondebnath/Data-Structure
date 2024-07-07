#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int roll, marks;
    
    Student(string name, int roll, int marks){
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class Custom_compare{
    public:
        bool operator()(Student a, Student b){
            // if(a.roll < b.roll) return true;
            // else false;

            return a.roll > b.roll;
        }
};

int main(){
    int n; cin>>n;

    priority_queue<Student, vector<Student>, Custom_compare> pq;

    for(int i=0; i<n; i++){
        string str;
        int roll, marks;
        cin>>str>>roll>>marks;

        Student object(str, roll, marks);

        pq.push(object);
    }

    while(!pq.empty()) {
        cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        pq.pop();
    }
    cout<<endl;

    return 0;
}