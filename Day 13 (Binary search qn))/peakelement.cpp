#include<iostream>
using namespace std;

int peak_element(int arr[],int size){
    int start=0;
    int end=size;
    int mid = start + (end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
           start=mid+1;
        }
        else{
            end=mid;
        }
     mid = start + (end-start)/2;   
    }
return start;
}

int main(){

 int n, ar[15];
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the  array in ascending or descending form : ";
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    
    int result1 = peak_element(ar,n);
    cout<<"Peak Index is "<<result1<<endl;
}