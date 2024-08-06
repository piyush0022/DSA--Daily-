#include<iostream>
using namespace std;

int ap(){
    int a;
    cout<<"Enter starting no. of AP : ";
    cin>>a;
    int d;
    cout<<"Enter the distance : ";
    cin>>d;
    int n;
    cout<<"Entter the no. terms you need in AP : ";
    cin>>n;
    int ans;
    for(int i=0;i<n;i++){
      ans=a+i*d;
      cout<<ans<<" ";
    }
};
int main(){
    ap();
}