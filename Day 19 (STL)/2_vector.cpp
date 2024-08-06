#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(5);
    
    cout<<"capacity is : "<<v1.capacity()<<endl;
    cout<<"Size is : "<<v1.size()<<endl;
   
    cout<<"Elements in vector are : ";
    for(int i:v1){
        cout<<i<<" ";
    }
    //pop
    v1.pop_back();

    cout<<endl<<"Elements after pop in vector are : ";
    for(int i:v1){
        cout<<i<<" ";
    }


}