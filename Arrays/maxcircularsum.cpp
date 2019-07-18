// maximum circular array sum
#include<iostream>
using namespace std;
int kadane(int a[],int n){
        int cs=0,ms=0,i;
        for(i=0;i<n;++i){
            cs+=a[i];
            if(cs<0)
                cs=0;
            else if(cs>ms)
                ms=cs;
        }
   return ms;
}
int main(){

int b[1000],n,cs,ms,t,sum=0,a[1000],i;
cin>>t;
   while(t--){
        cin>>n;
        sum=0;
        int c1=0;
        int c2=0;
        for(i=0;i<n;++i){
            cin>>a[i];
            sum+=a[i];
        }

       c1=kadane(a,n);
       //inverting array sign
       for(i=0;i<n;++i){
        if(a[i]<0)
            a[i]=-a[i];
            else if(a[i]>0)
            a[i]=-a[i];
       }
            c2=kadane(a,n);
      int k=sum+c2;
      if(k>c1)
         cout<<k<<endl;
      else
         cout<<c1<<endl;

   }
}
