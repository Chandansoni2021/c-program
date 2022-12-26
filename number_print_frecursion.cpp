#include<iostream>
using namespace std;
 int prin(int n){
    if(n==100){
        return 100;
    }
    else{
        cout<<n<<endl;
         prin(n+1);
    
    }
}
int main(){
    int n;
    cin >>n;
    int ans = prin(n);
    cout<<ans<<endl;
}