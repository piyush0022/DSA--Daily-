#include<iostream>
using namespace std;

void intersection_array(int arr1[],int arr2[],int size1,int size2){
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
}
int main (){
    int arr1[20],arr2[20],n1,n2;
    cout<<"Enter the no of element for 1st array : ";
    cin>>n1;
    cout<<"Enter the array : ";
    for(int i=0;i<n1;i++){
         cin>>arr1[i];
    }
    cout<<"Enter the no of element for 2nd array : ";
    cin>>n1;
    cout<<"Enter the array : ";
    for(int i=0;i<n1;i++){
         cin>>arr2[i];
    }
    intersection_array(arr1,arr2,n1,n2) ;
}