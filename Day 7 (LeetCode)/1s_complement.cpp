#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a decimal no.(Base 10 ) : ";
    cin>>num;
    
    int original_num=num;
    int mask=0;
    if(num == 0){
            cout<< "1";
            }
    else{
    while(num!=0){
        mask=(mask<<1) | 1;   //left shift by 1 with or  operation
        num=num>>1;           //right shift of num  by 1 
    }
    int ans=(~original_num) & mask;
    cout<<ans;
    }
    
}