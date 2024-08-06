#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the 1st no : ";
    cin>>a;
    cout<<"Enter the 2nd no : ";
    cin>>b;
    cout<<"---------------SELECT THE OPERATION ---------------"<<endl;
    cout<<"||     1.Add    ||  2.Subtarct     ||  3.Multiplication   ||    4.Division    ||  5.Remainder      ||"<<endl;
    cin>>c;
    switch(c){
        case 1: cout<< a+b;
                break;
        case 2: cout<< a-b;
        break;
        case 3: cout<< a*b;
        break;
        case 4: cout<< a/b;
        break;
        case 5: cout<< a%b;
        break;
    }

}