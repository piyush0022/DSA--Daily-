#include<iostream>
using namespace std;

int factorial(int num){
    int fact=1;
    for(int i=num;i>=1;i--){
       fact=fact*i;
    }
    return fact;
}

int main(){
 // combination 
 int n,r;
 cout<<"Enter n : ";
 cin>>n;
 cout<<"Enter r : ";
 cin>>r;
 int ans= factorial(n) /(factorial(r)*factorial(n-r));
 cout<< ans;

}