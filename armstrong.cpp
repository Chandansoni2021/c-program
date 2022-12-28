#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n ;
    cout<<"please enter a number to check:- ";
    cin>>n;
    int temp=n;
    int l=0;
    while(n>0){
        l=l+1;
        n=n/10;
    }
    int c=0;
    int g=temp;
    while(temp>0){
        int r = temp%10;
        c=c+pow(r,l);
        
        temp=temp/10;

    }
    if(c==g){
        cout<<"it is armstrong number"<<endl;
    }
    else{
        cout<<"it is not a prime number"<<endl;
    }

    cout<<l<<endl;
}