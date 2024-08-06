#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[5]="akhi";
    m[91]="haba";
    m[3]="ioki";
    m.insert({12,"raju"});
    for(auto i:m){
        cout<<i.first<<" ";
    }
    m.erase(3);
    m.erase(91);
    cout<<endl<<"After erase";
    for(auto i:m){
        cout<<i.first<<" ";
    }
}