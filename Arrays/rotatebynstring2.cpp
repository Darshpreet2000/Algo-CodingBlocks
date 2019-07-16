#include<iostream>
using namespace std;
int main(){

    int n,i,N=0,j=0;
    char a[100],t;
    cin>>a;
    cin>>n;
    for(i=0;a[i]!='\0';++i)
        N++;
   while(j<n){
      t=a[N-1];
    for(i=N-1;i>0;--i){
    a[i]=a[i-1];
    }
    a[0]=t;
    j++;
   }

cout<<a;

}

