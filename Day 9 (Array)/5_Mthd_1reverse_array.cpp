#include<iostream>
using namespace std;

int reverse_array(int array[],int size){
    cout<<"rEVESE OF ARRAY IS : ";
    for(int i=size-1;i>=0;i--){
        cout<<array[i]<<" ";
    }
}

int main(){
     int n,arr[20];
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the  array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse_array(arr,n);
}