#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  string s="abcde";
  reverse(s.begin(),s.end());
  cout<<"Resverse --> "<<s<<endl;

  sort(s.begin(),s.end());
  cout<<"sorted--> "<<s<<endl;

  pop_heap(s.begin(),s.end());
  pop_heap(s.begin()+1,s.end()-1);
  cout<<"After POP : "<<s<<endl;
}