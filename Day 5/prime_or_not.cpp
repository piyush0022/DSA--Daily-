#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a No. : ";
    cin>>num;
     for(int i=2;i<num;i++){
        if(num%i==0){
           cout<<"Not Prime";
           break;
        }
        else{
            cout<<" Prime";
            break;
        }
     }

}