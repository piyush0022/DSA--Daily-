#include<iostream>
using namespace std;

int sum(int num[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=num[i]+sum;
    }
    return sum;
}

int main(){
    int n,arr[20];
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the  array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<"Sum is : "<<sum(arr,n);
}