#include<iostream>
#include<deque>
using namespace std;
int main(){
     deque<int>  a;
     a.push_back(2);
     a.push_back(4);
     a.push_back(14);
     a.push_front(55);
     for(int i:a){
        cout<<i<<" ";
     }
     cout<<endl;
     cout<<" At index 3 is " <<a.at(3);

     cout<<endl;
     a.erase(a.end(),a.end()+2);
     cout<<"After erasing : ";
     for(int i:a){
        cout<<i<<" ";
     }
     
}