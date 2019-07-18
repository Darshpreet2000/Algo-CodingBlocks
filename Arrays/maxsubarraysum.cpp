//Maximum subarray sum
#include<iostream>
using namespace std;
int main(){

   //using kadane's algorithm
   int t,cs,ms=0,n,i,j,a[20];
   cin>>t;
   while(t--){
   cin>>n;
   for(i=0;i<n;++i){
    cin>>a[i];
   }
     ms=0;
     cs=0;
        for(i=0;i<n;++i){
           cs+=a[i];
           if(cs<0)
            cs=0;
           else if(cs>ms)
            ms=cs;

       }
      cout<<ms<<endl;
   }

}
