#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter  a no. to be 2 to the power or not : ";
    cin>>num;
    int ans;
    for(int i=0;i<31;i++){
     ans=pow(2,i);
     if(num==ans){
        cout<<"YES IT IS PERFECT SQUARE ROOT OF 2";
        break;
     }
    }
    if (ans!=num){
      cout<< " NO";
    }


}