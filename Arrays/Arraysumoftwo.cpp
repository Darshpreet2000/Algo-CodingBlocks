//Array sum of two arrays
#include<iostream>
using namespace std;
int main(){
    int i,j,n,sum=0,N,m,k=0,a[100],b[100],c[100];
    cin>>n;
    for(i=0;i<n;++i){
        cin>>a[i];
    }
       cin>>m;
    for(i=0;i<m;++i){
        cin>>b[i];
    }
int t,h,s;
       if(n>m){
        t=n;
        s=m;
        h=t-m;
       }

       else{
       t=m;
       s=n;
       h=t-n;
       }
      k=0;

       for(i=t-1;i>=0;--i){
            sum=0;
            if(i-h<0){
                b[i-h]=0;
                a[i-h]=0;
            }
            if(m<=n)
           sum+=a[i]+b[i-h];
         else if(m>n)
            sum+=a[i-h]+b[i];
           if(sum<=9)
            c[k++]=sum;
       else{
            while(sum){
                N=sum%10;
                if(sum/10==0)
                    break;
                c[k++]=N;
                sum=sum/10;
            }
            if(m<=n){
                if(i-1<0)
                    c[k++]=N;
                else
                a[i-1]+=N;
            }
           else if(m>n){
             if(i-1<0)
                c[k++]=N;
                else
            b[i-1]+=N;
           }


       }


       }
    for(i=k-1;i>=0;--i){
        cout<<c[i]<<", ";
    }
   cout<<"END";
}
