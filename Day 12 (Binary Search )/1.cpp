#include<iostream>
using namespace std;

int binary_search(int arr[],int size , int key ){

    int start=0;
    int end=size-1;
    int mid=(start+end)/2;

    while(start<=end){
        if(key==arr[mid]){
            return mid;
        }
        else if(key>arr[mid]){
            //Go to right part 
            start=mid+1;
        }
        else if(key<arr[mid]){
            //go to leaft part
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main(){
 int n, ar[15];
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the  array in ascending or descending form : ";
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int key;
    cout<<"Enter the which you want to find : ";
    cin>>key;
    int result = binary_search(ar, n,key);
    cout<<"Index is "<<result;
}