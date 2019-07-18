#include<iostream>
using namespace std;
int left(int,int []);
int right(int,int [],int);
int main(){
       int t;
       cin>>t;
       while(t--){
int n,a[1000],sum=0,max=0,i,k,l,r;
cin>>n;
    for(i=0;i<n;++i){
       cin>>a[i];
    }
   for(i=0;i<n;++i){
        sum=0;
           l=left(i,a);
           r=right(i,a,n);
         sum=(l+r+1);
         if(sum>max)
            max=sum;
   }

 cout<<max<<endl;

       }
  return 0;
}
int left(int b,int c[]){
   int i,l=0;
   if(b==0)
    return 0;
   for(i=b;i>0;--i){

        if(c[i]>c[i-1])
            l=l+1;
        else
            break;
   }
return l;
}
int right(int b,int c[],int n){
     int i,l=0;
     if(b==n-1)
        return 0;
     for(i=b;i<n-1;++i){

      if(c[i]>c[i+1])
            l=l+1;
      else
        break;
     }
  return l;

}
