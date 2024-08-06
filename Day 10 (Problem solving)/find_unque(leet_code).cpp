//question : Given an array of integers arr, return true if the number of occurrences of 
//           each value in the array is unique or false otherwise.

#include <vector>    // For std::vector
#include <algorithm> // For std::sort
#include<iostream>
using namespace std;

bool find_unique(vector<int> ar,int size){
    vector<int> ans;
    sort(ar.begin(),ar.end());
    int i=0;
    size=ar.size();
    while(i<size){
        int count=1;
        for(int j=i+1;j<size;j++){
            if(ar[i]==ar[j]){
                count++;
            }
            else{
                break;
            }
        }
        i=i+count;
        ans.push_back(count);
    }
    size=ans.size();
    sort(ans.begin(),ans.end());
    for(int i=0;i<size;i++){
        if(ans[i]==ans[i+1]){
            return 0;
        }
    }
    return 1;
    } 

int main(){
     int n;
     vector<int> ar;
    cout<<"Enter the odd size of array : ";
    cin>>n;
    cout<<"Enter the  array : ";
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    bool result = find_unique(ar, n);
    if (result==1) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}