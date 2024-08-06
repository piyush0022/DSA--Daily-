#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v2(5,1);   //5 is the size and all contain   1 ... 
    for(int a:v2){
        cout<<a<<" ";
    }
    cout<<endl;
  vector<int> v3(v2);   // store the elemnt of v2 in v3
  for(int a:v3){
        cout<<a<<" ";
    }
}