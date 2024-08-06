#include<iostream>
using namespace std;

bool linear_search(int num[],int size ,int val)
{
    for(int i=0;i<size;i++){
        if(num[i]==val){
            return 1;
        }
    }
    return 0;
}

int main(){
     int n,arr[20];
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the  array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key which you find in array : ";
    cin>>key;
    
    bool found;
    found=linear_search(arr,n,key);
    if(found==1){
        cout<<"Key "<<key<<" found";
    }
    else{
        cout<<key<<" not found";
    }
}