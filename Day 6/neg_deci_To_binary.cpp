#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int negnum;
    cout<<"Enter -ve num : ";
    cin>>negnum;
    int num=-negnum;
    int ans=0 , i=0, digit;
    while(num!=0){
        digit=(num%2);

        ans=(pow(10,i)*digit + ans);
        num=num/2;
        i++;
    }
    cout<<ans;
    cout<<endl<<ans;
}