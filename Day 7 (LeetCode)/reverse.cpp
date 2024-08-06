#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter  a no. to be reverse : ";
    cin>>num;
    int digit;
    int reverse=0;
    while(num!=0){
        digit=num%10;
        reverse=(10*reverse)+digit;
        num=num/10;
    }
    
    if(reverse>INT_MAX && reverse<INT_MIN){
        cout<<  "0";
    }
    else{
        cout<<reverse;
    }
}