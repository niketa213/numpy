#include <iostream>
using namespace std;
int main() {
  //print odd number between 1. and 100
  for(int i= 1; i <=100; i++){
      if(i%2!=0){
          cout<<i<<endl;
      }
  
  }
//print  number b/w 1/100 which is divisible by 3
for(int i= 1; i <=100; i++){
    if(i%3==0){
        cout<<i<<endl;
    }
    
}
// display ap 4,7,10,13....
int n;
cin>>n;
int a= 1;
for(int i=1; i<=n;i++){
    cout<<a<<endl;
    a=a+3;
}

// display gp  3,12,48.....n
int n;
cin>>n;
int a=1;
for(int i=1;i<=n;i++){
    cout<<a<<endl;
    a *= 3;
}


// wap to print all ascii values  and their equivalent  character of 26 alphabate using while loop

char ch;
cin>>ch;
int ch=97;
while (ch <= 122){
    cout<<ch<<" "<<char(ch)<<endl;
    ch++;
}
//for upperletters
char i;
cin>>i;
int i=65;
while (i <= 97){
    cout<<i<<" "<<char(i)<<endl;
    i++;
}

// print number n to 1
int n ;
cin>>n;
for(int i=n ;i >=0; i--){
    cout<<i<< endl;
}

// wap to print sum of n natural number
int n;
cin>>n;
int sum = 0;
for(int i= 1; i <=n ; i ++){
    sum = sum + i ;
}cout<<sum;



 

  
}