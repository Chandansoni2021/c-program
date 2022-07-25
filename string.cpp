using namespace std;
#include<iostream>
#include<cstring>
int main(){
    char a[]="hy ";
    char b[]="chandan soni coder!!!!";
    char t[]={};
    cout<<"the concatinate of both string:"<<"\n"<<strcat(a,b)<<"\n";
    cout<<"the copied string are:"<<"\n"<<"the value of t is :"<<"\n"<<strcpy(t,a)<<"\n";
    cout<<"the length of the string t is :"<<"\n"<<strlen(t);
    return 0;
}