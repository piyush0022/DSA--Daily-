#include<iostream>
using namespace std;

int max(int arr[],int size){
    int maxi=INT_MIN;
    for(int i=0;i<size;i++){
        maxi=max(maxi,arr[i]);
        //if(arr[i]>maxi){
        //    maxi=arr[i];
        //}
    }
    return maxi;
}

int min(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int a[10];
    cout<<"Enter the array : ";
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"Maximum is "<<max(a,5);
    cout<<endl<<"Minimum is "<<min(a,5);
}