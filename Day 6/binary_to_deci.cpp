#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int binary;
    cout<<"Enter a binary no. : ";
    cin>>binary;
    int ans=0,i=0;
    int bit;
    while(binary!=0){
        bit=binary%10;
        ans=(pow(2,i))*bit+ans;
        binary=binary/10;
        i++;
    }
    cout<<endl<<ans;
}