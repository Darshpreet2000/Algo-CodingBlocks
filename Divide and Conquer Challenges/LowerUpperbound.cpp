//Lower and upper bound
#include<iostream>
using namespace std;
int main(){
int t,n,s=0,lower,upper,e,mid,a[100],x,i;
cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  cin>>t;
  while(t--){
   cin>>x;
     s=0;
  e=n-1;
  lower=-1;
  upper=-1;
    while(s<=e){
        mid=(s+e)/2;
        if(a[mid]==x){
            lower=mid;
            e=mid-1;
        }
        else if(x>a[mid])
            s=mid+1;
        else if(x<a[mid])
            e=mid-1;

    }
   s=0;
   e=n-1;
        while(s<=e){
            mid=(s+e)/2;
            if(a[mid]==x){
                s=mid+1;
                upper=mid;
            }
            else if(x>a[mid])
                  s=mid+1;
            else if(x<a[mid])
                e=mid-1;
        }
    cout<<lower<<" "<<upper<<endl;
  }
}
