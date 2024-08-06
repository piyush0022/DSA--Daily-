#include<iostream>
using namespace std;
int fibonacci(){
   int num;
   cout<<"Enter a no. terms upto which you want fibonacci : ";
   cin>>num;
   int a=0,b=1;
   cout<<"0 1 ";
   int next;
   for(int i=0;i<=num;i++){
    next=a+b;
    cout<<next<<" ";
    a=b;
    b=next;
   }
}

void not_fibonacci(){
    int n;
    cout<<"Enter the no. upto which you not want the series : ";
    cin>>n;
    int num=4;
    int a=0,b=1,next;
    for(int i=0;i<=n;i++){
    next=a+b;
    a=b;
    b=next;
    // cout<<next<<" ";
    if(next!=num){
        cout<<num<<" ";
    }
    num++;
   }
}

int main(){
    not_fibonacci();
    cout<<endl;
    fibonacci();
}