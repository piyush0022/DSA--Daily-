//Condition & Loops 

#include<iostream>
using namespace std;

int main(){
   /*int a;
    cout<<"enter a no . :" ;
    cin>>a;

    if(a>0){
        cout<<"the no. "<<a<<" is +VE";
    }
    else{
        cout<<"the no. "<<a<<" is -VE";
    }*/ 



  //TO GET ASCII value  

 int b;
cout<<"Enter anything for which you want ascii value : ";
 b=cin.get();
 cout<<" Ascii Value is "<< b;



/*
int c=9;
if(c==9){
    cout<<"NINEY";
}
if (c>0){
cout<<"Positive";
}
else{
    cout<<"Neg";
}

//its o/p will be NineyPositive

int c=9;
if(c==9){
    cout<<"NINEY";
}
else if (c>0){
cout<<"Positive";
}
else{
    cout<<"Neg";
}
 // its o/p will be Niney

 */

/*
char a;
cout<<"Enter (a-z) , (A-Z) , (0-9) : ";
cin>>a;

int b=int(a);

if(b>=97 && b<=122){
    cout<<"  Lower Case";
}
else if(b>=65 && b<=90){
    cout<<"  Upper  Case";
}
else {
    cout<<"  Numeric";
}*/

 /*  //Prime Number 
int n;
cout<<"Enter the no. upto you want Prime no . : ";
cin>>n;
int num=2;
int i=1;
while(i<n)
{
  if(num %i!=0){
    cout<<num<<" ";
  }
  num++;
  i++;
} */
                     //Sum of Even nos
 /*
 int n,i=1,sum=0;
 cout<<"Enter ano. : ";
 cin>>n;
 while(i<=n){
    if(i%2==0){
        sum=sum+i;
    }
    i++;
 }
 cout<<sum;    */

 //Prime or not
 /*  int n,i=2;
 cin>>n;
 while(i<n){
    if(n%i!=0){
        cout<<"Prime";
    }
    else{
        cout<<" Not Prime";
    }
    i++;
 }
*/

//Pattern 1 
/*
 ****
 ****
 ****
 ****
*//*
int i=1;
while(i<=4){
    int j=1;
    while(j<=4){
        cout<<"*";
        j++;
    }
    cout<<endl;
    i++;
}
*/

//Pattern 2 
/*
1 1 1 1 
2 2 2 2
3 3 3 3 
4 4 4 4
*/
int i=1;
while(i<=4){
    int j=1;
    while(j<=4){
        cout<<i<<" ";
        j++;
    }
    cout<<endl;
    i++;
}

}