#include<iostream>
using namespace std;
#include<math.h>

int main(){
    int num;
    cout<< "Enter the decimal : ";
    cin>>num;
    int num1=num;
     int digit1 ;
    int digit;
    int ans=0,ans1=0,i=0 ,j=0;
    while(num!=0){
        digit=num%2;        
        ans=(pow(10,i))*digit + ans;
        num=num/2;
        i++;
    }
    cout<<endl<<ans;

    //2nd approach 
    while(num1!=0){
        digit1=num1%2;
        ans1=(pow(10,j)*digit1 + ans1);
        num1=num1>>1;
        j++;
    }
    cout<<endl<<ans1;
}