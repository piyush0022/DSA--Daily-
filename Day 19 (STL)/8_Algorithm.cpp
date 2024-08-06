#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int arr[10];
    for(int i=0;i<5;i++){
        cin>>arr[i];
        v.push_back(arr[i]);
    }
    cout<<endl<<"Yor array is -- > ";
    for(int i:v){
        cout<<i<<" ";
    }
    reverse(v.begin(),v.end());
    cout<<endl<<"Yor reverse array is -- > ";
    for(int i:v){
        cout<<i<<" ";
    }
    // maximum
     auto max_it=max_element(v.begin(),v.end());
    cout<<endl<<"Max in the array is ---> " <<*max_it;

    //minimum
    auto min_it=min_element(v.begin(),v.end());
    cout<<endl<<"Min in the array is ---> " <<*min_it;

    //sorting
    sort(v.begin(),v.end());
    cout<<endl<<"Sorted array is  ---> ";
    for(int i:v){
        cout<<i<<" ";
    }
}