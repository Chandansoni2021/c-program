#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6};
    int temp=0;
    int len = sizeof(arr)/sizeof(int);
    cout<<len<<endl;
    for(int i=0;i<len-1;i=i+2){
        if((i+1)<len){
        temp = arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        }  
    }
    for(int j=0;j<len;j++){
    cout<<arr[j]<<" ";
    }
      return 0;
}