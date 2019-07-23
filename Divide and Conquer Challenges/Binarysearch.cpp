#include<iostream>
using namespace std;
int search(long long int b[],long long int n,int t){
    int i=0,s,e,mid;
   s=0;
   e=n-1;
    while(s<=e){
        mid=(s+e)/2;
        if(t>b[mid])
            s=mid+1;
        else if(t<b[mid])
           e=mid-1;
           else {
            return mid;
           }
    }
 return -1;
}
int main(){
long long int t,n,a[10000],c,i;
cin>>n;
for(i=0;i<n;i++){
    cin>>a[i];
}
    cin>>t;
      c=search(a,n,t);
     cout<<c;
}
