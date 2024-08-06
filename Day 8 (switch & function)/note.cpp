#include<iostream>
using namespace std;
int main(){
    int total;
    cout<<"Enter the total amount : ";
    cin>>total;
    int hund;
    hund=total/100;
    cout<< hund<<" Hundred note " <<endl;
    total=total-hund*100;
    int fifty;
    fifty=total/50;
    cout<< fifty<<" fifty note " <<endl;
    total=total-fifty*50;
    int  twenty;
    twenty=total/20;
    cout<< twenty<<" twenty note " <<endl;
    total=total-20*twenty;
    cout<<total <<" one coin " <<endl;
     }
