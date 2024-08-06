#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> a;
    a.push_back(5);
    a.push_back(2);
    a.push_back(8);
    a.push_back(0);
    a.push_front(0);
    for(int c:a){
        cout<<c<<" ";
    }
    cout<<endl<<"After pop : ";
    a.pop_front();
    for(int c:a){
        cout<<c<<" ";
    }
    cout<<endl<<"After erase : ";
    a.erase(a.begin());
    for(int c:a){
        cout<<c<<" ";
    }
    a.clear();
     cout<<endl<<"After clear the size is : "<<a.size();
     cout<<endl<<"the elements are : ";
    for(int c:a){
        cout<<c<<" ";
    }

}