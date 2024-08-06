//      1 
//    1 2 1
//  1 2 3 2 1
// 1 2 3 4 3 2 1

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number for rows & col : ";
    cin>>n;
    int row=1;
    while(row<=n){

        // :::     print space    ::: 
        int space=n-1;
        while(space>=row){
           cout<<" ";
           space=space-1;
        }

        //  :::    print 1st tringle     ::: 
        int col=1;
        int value=1;
        while(col<=row){
            cout<<value;
            value++;
            col++;
        }

        // :::     2nd triangle    ::: 
        int start=row-1;
        while(start){
            cout<<start;
            start--;
        }
        
        row++;
        cout<<endl;
        
    }
}