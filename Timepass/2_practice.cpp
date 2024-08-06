//         1 2 3 4 5 5 4 3 2 1
//         1 2 3 4 * * 4 3 2 1 
//         1 2 3 * * * * 3 2 1
//         1 2 * * * * * * 2 1
//         1 * * * * * * * * 1

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number for rows & col : ";
    cin>>n;
    int row=1;
    int val2=n;
    
    while(row<=n){
        // :::  1st Triangle   ::: 
        int col=n;
        int value=1;
         while(col>=row){
            cout<<value;
            col--;
            value++;
         }

         //  :::    2nd Triangle    :::

        int star=2*(row-1);
        while(star){
           cout<<"*";
           star--;
        }

        //  :::   3rd Triangle    ::: 
        int col2=n;
        while(col2>=row){
            cout<<val2;
            val2--;
            col2--;
        }
         val2=val2+n-row;
         row++;
         cout<<endl;
    }
}