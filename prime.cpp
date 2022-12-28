#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"please enter a range of number to check"<<endl;
    cin>>n;
for(int j=1;j<=n;j++){
    int c = 0;
    for(int i=2;i<j;i++){
        if(j%i==0){
         c=c+1;
        }
    }
    if(c>0){
        cout<<j<<" is not a prime number"<<endl;
    }
    else{
        cout<<j<<" is a prime number"<<endl;
    }
    }

return 0;
}