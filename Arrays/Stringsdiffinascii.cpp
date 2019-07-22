//Strings difference in ascii codes
#include<iostream>
#include<vector>
#include<string>
#include<string.h>
using namespace std;

int main(){

int j,d,i,n,p,k;
char a[100];
cin>>a;
   n=strlen(a);
     for(i=0;i<n-1;++i){
       cout<<a[i];
        d=a[i+1]-a[i];
         cout<<d;
     }
    cout<<a[n-1];
}
