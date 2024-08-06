//decimal to binary 
#include<iostream>
#include<math.h>
using namespace std; 
int main(){
    int num;
    cout<<"Enter the decimal : ";
    cin>>num;
    int ans=0;
    int i=0;
    while(num!=0){
        int digit=num%2;
        ans=(pow(10,i)*digit)+ans;
        i++;
        num=num/2;
    }
    cout<<"binary --- > "<<ans;

}