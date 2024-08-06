// Square root without float

#include<iostream>
using namespace std;

long long int square_root(int num) {
 int s=0;
 int e=num;
 long long int mid=s+(e-s)/2;
 long long int square=mid*mid;
 int ans=-1;
 while(s<=e){
    long long int square=mid*mid;
    if(square==num){
        return mid;
    }
    else if(square>num){
        e=mid-1;
    }
    else{
        s=mid+1;
        ans=mid;
    }
    mid=s+(e-s)/2;
 }
 return ans;
}

int main(){
   int n;
   cout<<"Enter the number to find the square root of : ";
   cin>>n;
   cout<<"square Root is "<<square_root(n);
}