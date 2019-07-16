//to calculate factorial and ncr
#include<iostream>
using namespace std;
int fact(int a){
       int i,f=1;
       for(i=1;i<=a;++i)
        f=f*i;
  return f;

}
   int main(){
       int n,r,ncr;
    cout<<"enter n,r";
      cin>>n>>r;
      cout<<fact(n)/(fact(r)*fact(n-r));
      return 0;

   }
