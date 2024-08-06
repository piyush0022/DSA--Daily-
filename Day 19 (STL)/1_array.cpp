#include<iostream>
#include<array>
using namespace std;
int main(){
      array<int,5> a={1,2,3,4,5};  
      int size=a.size();
      for(int i=0;i<size;i++){
          cout<<a[i]<<" ";
      }
      cout<<endl<<"LAST element : "<<a.back();
      cout<<endl<<"element at index 3 is : "<<a.at(3);
      cout<<endl<<"First element is : "<<a.front();
}