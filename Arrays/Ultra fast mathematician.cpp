//Ultra fast mathematicians
#include<iostream>
using namespace std;
int main(){

char a[100],b[100],c[100];
int i,j,n,t;
cin>>t;
while(t--){
cin>>a;
cin>>b;
   for(i=0;a[i]!='\0';++i){
      if(a[i]==b[i])
        c[i]='0';
      else if(a[i]!=b[i])
        c[i]='1';

   }
   c[i]='\0';
  cout<<c<<endl;
}
}
