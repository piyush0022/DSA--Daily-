#include<iostream>
using namespace std;

bool is_prime(){
    int num;
    cout<<"Enter a no. to check for prime : ";
    cin>>num;
    for(int i=2;i<num;i++){
        if(num%i==0){
            return 0 ;
        }
            return 1;

    }
    return 1;
}

int main(){
    if(is_prime()==1){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime no. ";
    }
}
