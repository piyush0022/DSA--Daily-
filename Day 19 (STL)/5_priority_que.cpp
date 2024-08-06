#include<iostream>
#include<queue>
using namespace std;
int main()
{
    // <--------maximum-------------> 
 priority_queue<int> maxi;
 maxi.push(5);
 maxi.push(2);
 maxi.push(25);
 maxi.push(17);
int size1=maxi.size();

cout<<"Minimum is : "<<maxi.top()<<endl;

cout<<"Descending order: ";
for(int i=0;i<size1;i++){
    cout<<maxi.top()<<" ";
    maxi.pop();
}

// <-------------minimum----------------->
priority_queue<int,vector<int> , greater<int>> mini;
 mini.push(12);
 mini.push(10);
 mini.push(96);
 mini.push(12);
int size2=mini.size();
cout<<endl <<"Minimum is : "<<mini.top()<<endl;

cout<<"Ascending order: ";
for(int i=0;i<size1;i++){
    cout<<mini.top()<<" ";
    mini.pop();
}
}