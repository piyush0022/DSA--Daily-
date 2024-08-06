#include<iostream>
using namespace std;

int first_occurence(int arr[],int size,int key){
    int start=0 ;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){
    if(arr[mid]==key){
        ans=mid;
        end=mid-1;              // start wala occuernce dekhne k liye......pure array me left move
    }
    else if(arr[mid]<key){      //right move
          start=mid+1;
    }
    else if(key<arr[mid]){      //left move
        end=mid-1;
    }
    mid=start+(end-start)/2;
    }
    return ans;
}

int last_occurence(int arr[],int size,int key){
int start=0 ;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){
    if(arr[mid]==key){
        ans=mid;
        start=mid+1;    // Last wala occuernce dekhne k liye......pure array me right move
    }
    else if(arr[mid]<key){      //right move
          start=mid+1;
    }
    else if(key<arr[mid]){      //left move
        end=mid-1;
    }
    mid=start+(end-start)/2;
    }
    return ans;
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
    int result1 = first_occurence(ar, n,key);
    cout<<"First occurence Index is "<<result1<<endl;
    int result2 = last_occurence(ar, n,key);
    cout<<"Last occurence Index is "<<result2<<endl;
    int result3=result2-result1+1;
    cout<<"The no. of freq of key "<<key<<" is "<<result3;

}