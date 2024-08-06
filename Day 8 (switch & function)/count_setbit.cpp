#include<iostream>
using namespace std;
#include<math.h>
 // set bit counting 

    int binaryconversion(){
    int num;
    cout<<"Enter the Base 10 no .  : ";
    cin>>num;
    int ans=0,i=0;
    while(num!=0){
        int digit=num%2;
        ans=digit*pow(10,i)+ans;
        num=num/2;
        i++;
    }
    return ans;
}
int set_bit_count(){
    int count=0;
    int binary=binaryconversion();
    while(binary){
        int digit=binary%10;
        if(digit==1){
            count++;
        }
        binary=binary/10;
    }
    return count;
}

int main(){
cout<<set_bit_count();
}