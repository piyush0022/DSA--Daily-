#include<iostream>
using namespace std;


int reverse(int num[],int size){
    int end=size-1;
    for(int start=0;start<=end;start++){
         swap(num[start],num[end]);    //swap is in built function
         end--; 
    }
    for(int i=0;i<size;i++){
        cout<<num[i]<<" ";
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
    reverse(arr,n);
}