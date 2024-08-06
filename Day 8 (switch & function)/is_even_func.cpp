#include<iostream>
using namespace std;

bool is_even(){
    int num;
    cout<<"Enter a no to check even : ";
    cin>>num;
    if(num%2==0){
        return 1;
    }
    else{
        return 0;
    }

}

int main(){

   int ans=is_even();
   cout<< ans<<endl;

   int ans2=is_even();
   cout<<ans2;
}