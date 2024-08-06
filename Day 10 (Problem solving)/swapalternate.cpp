#include<iostream>
using namespace std;

void swap_alter(int a[],int size){
   for(int i =0;i<size-1;i=i+2)
   {
    swap(a[i],a[i+1]);

   }
   for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
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
    swap_alter(arr,n);
}