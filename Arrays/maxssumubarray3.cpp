//Kadane's Algorithm
#include<iostream>
using namespace std;
int main(){

   int cs=0,ms=0,n,i,a[10];
   cin>>n;
   for(i=0;i<n;++i)
    cin>>a[i];
        for(i=0;i<n;++i){
            cs+=a[i];
            if(cs<0)
                cs=0;
            if(cs>ms)
            ms=cs;
        }
     cout<<ms;
}
