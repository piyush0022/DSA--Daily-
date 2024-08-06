#include<iostream>
using namespace std;

int find_unique(int array[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^array[i];   // xor because it cancel 1 times rrepeated value 
    }
    return ans;
}

int main(){
     int n,arr[20];
    cout<<"Enter the odd size of array : ";
    cin>>n;
    cout<<"Enter the  array repeat any no max 2 times : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<" Unique element is : Unique element is : " <<find_unique(arr,n);
}