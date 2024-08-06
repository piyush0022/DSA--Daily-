#include<iostream>
using namespace std;

int power(int base,int power){
    cout<<"Enter base : ";
    cin>>base;
    cout<<"Enter power ^ : ";
    cin>>power;
    int ans=1;
    for(int i=1;i<=power;i++){
       ans=ans*base;
    }
    return ans;
}


int main(){
    int a,b;
   cout<< power(a,b);
}