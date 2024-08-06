#include<iostream>
#include<set>
using namespace std;
int main(){
 set<int> s;
 s.insert(3);
 s.insert(2);
 s.insert(12);
 s.insert(80);
 s.insert(62);
 s.insert(12);
 s.insert(1);
//  
 cout<<"elements are : ";
 for(auto i:s){
    cout<<i<<" ";
 }

// Erasing

set <int> :: iterator it=s.begin();
it++;
s.erase(it);
 cout<<endl<<"After erasing elements are : ";
 for(auto i:s){
    cout<<i<<" "; 
 }
//   Count -----> for check the element is present or not
s.count(12);
cout<<"Yes (1)  no(0)  Element is present : ----> "<<s.count(12);


// <-----------Finding-------------->
// set<int> :: iterator itr=s.find(12);
// cout<<"--itr is --> "<<s.find(12);
// }