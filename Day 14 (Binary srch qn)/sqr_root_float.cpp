// Square root with float

#include<iostream>
using namespace std;

long long int square_root(int num){
 int s=0;
 int e=num;
 long long int mid=s+(e-s)/2;
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
float precision(int num,int precise,int integer_ans){
     float ans=integer_ans;
     float factor=1;
     for(int i=0;i<precise;i++){
        factor=factor/10;

        for(float j=ans;j*j<num;j=factor+j){
            ans=j;
        }
     }
     return ans ;
}


int main(){
   int n;
   cout<<"Enter the number to find the square root of : ";
   cin>>n;
   int temp=square_root(n) ;
   cout<<"Square root is : "<<precision(n,3,temp);
}