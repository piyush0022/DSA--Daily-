#include<iostream>
using namespace std;
// Pivot
int pivot(int a[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(a[mid]>a[0]){
           s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
// Binary search
int binary_search(int ar[],int size,int start , int end , int key){
    int mid=start+(end-start)/2;
    while(start<=end){
        if(key==ar[mid]){
            return mid;
        }
        else if(ar[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
// searching operetion
int search(int array[],int size,int key){
  int pivotelement=pivot(array,size);
  // Searching Right / 2nd line
  if(key>=array[pivotelement] &&  key<=array[size-1]) {
    return binary_search(array,size,pivotelement,size,key);
  }
//   Searchinf in left / 1st line
  else{
    return binary_search(array,size,0,pivotelement-1,key);
  } 
}

int main(){
int n,arr[10];
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the array rotated and sorted form  : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key : ";
    cin>>key;
    cout<<"Yes its index is : "<<search(arr,n,key);
}