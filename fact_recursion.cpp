#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;

    }
    
    else{
        int f = n*fact(n-1);
        
        return f;
    }
    
}
int main(){
    int n;
    cin >>n;
    int ans = fact(n);
    cout<<ans<<endl;
    return 0;
}