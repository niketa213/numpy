# include <iostream>
using namespace std;
int main(){
//wap to print any thing 5time
for(int i=1;i<=5;i++){
    cout<<"alpha intern"<<endl;
}

//for print 0 to 4 no
for(int i=0;i<5;i+=3){
    cout<<i<<endl;
}

// wap print alpha intern n times taking user input
int n;
cout<<"enter value of n :";
cin>>n;
for(int i=1;i <=n;i++){
    cout<<"alpha intern"<<endl;
    }
 
//wap to no of n
for(int i=1;i<=100;i++){
    cout<<i<<endl;
}

//wap to print even no from 1to 100
for(int i=1;i<=100;i++){
    if(i%2 ==0){
        cout<<i<<endl;
    }
}
//print table of 19
int a;
cout<<"enter any no want print table :";
cin>>a;
int result=1;
for(int i=1;i<=10;i++){
    result=a*i;
    cout<<result<<endl;
}

//display ap 1,3,5,7,9....n
int n;
cout<<"enter value of n:";
cin>>n;
int a= 1;
for(int i=1; i<=n;i++){
    cout<<a<<endl;
    a=a+2;
}
//display gp 1,2,4,8,16,32....n
int n;
cout<<"enter value of n:";
cin>>n;
int a= 1;
for(int i=1; i<=n;i++){
    cout<<a<<endl;
    a=a*2;
}
//to print reverse
for(int i=6; i<=1;i--){
    cout<<a<<endl;
}


//wap to use while loop
int n;
cout<<"enter value of n:";
cin>>n;
while(n<=10){
     cout<<n<<endl;
     n++;
    
}
}