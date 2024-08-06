#include<iostream>
#include<array>
using namespace std;

int pivot(int a[],int size){
     int s=0;
     int e=size-1;
     int mid=s+(e-s)/2;
     while(s<e){
        if(a[mid]>=a[0]){
        s=mid+1;
     }
     else{
        e=mid;
     }
     mid=s+(e-s)/2;
     }
     return e;
}

int main(){
    int n,arr[10];
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the array as (asecending) after some again ascending : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Pivot index is : "<<pivot(arr,n);

}