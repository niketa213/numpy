
//wap to  check if a number is prime no or not use of break
# include <iostream>
using namespace std;

int main(){
    int m;
    cout<<"enter the no :";
    cin>>m;
    bool flag=true;
    for(int i=2;i<=m-1;i++){
        if(m%i == 0){
            cout<<"its a prime no ";
            bool flag=false;
            break;
        }
    }
    if(m == 1) cout<<"neither prime nor comp";
    if(flag == true) cout<<"prime no";
    else cout<<" not prime no";


    
}
//use of continue
int main(){
    for( int i=1;i<=10;i++){
        if(i%2 == 0){
            continue;
        }
        cout<<i<<endl;
    }

}

//wap to count digits of given no
int main(){
    int n;
    cout<<"enter the no :";
    cin>>n;
    int a=n;
    int count=0;
    while(n>0){
        n/= 10;
        count++;
    }
    if(a==0) cout<<1;
    else cout<<count;
    
}
//wap to rpint sum of digit of given no
int main(){
    int n;
    cout<<"enter the no :";
    cin>>n;
    int sum=0;
    int lastdigit=0;
    while(n>0){
        lastdigit=n%10;
        sum +=lastdigit;
        n/=10;

    }
    cout<<sum;
}


//wap to print reverse of given no
int main(){
    int n;
    cout<<"enter the no :";
    cin>>n;
    int r=0;
    int lastdigit=0;
    while(n>0){
        r=r*10;
        lastdigit=n%10;
        r+=lastdigit;
        n/=10;

    }
    cout<<r;
}

//print sum of the series:1-2+3-4+5.....n
int main(){
    int n;
    cout<<"enter the no :";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0) 
        sum+=i;
        else sum-=1
    }
    cout<<sum;
}
//print factorial of no
int main(){
    int n;
    cout<<"enter the no :";
    cin>>n;
    int p=1;
    for(int i=1;i<=n;i++){
        p=p*i;
    }
    cout<<p;

}



//wap to print fibonacci no
int main(){
    int n;
    cout<<"enter the no :";
    cin>>n;
    int a=1;
    int b=1;
    int sum=0;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    cout<<sum;
}

