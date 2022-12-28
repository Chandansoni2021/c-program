#include<iostream>
using namespace std ;
int main()
{
    int n ;
    cout<<"please enter a number for check :-  ";
    cin>>n;
    int sum=0;
    int temp=n;
    while(n>0){
        int dig = n%10;
        sum= (sum*10)+dig;
        n=n/10;

    }
    if(temp==sum){
        cout<<"it is a palindron number"<<endl;
    }
    else{
        cout<<"it is not a palindrom number"<<endl;
    }
    return 0;
}