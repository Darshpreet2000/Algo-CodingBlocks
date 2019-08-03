#include<iostream>
#include<math.h>
using namespace std;
#define ll long long int
bool isvalid(ll mid,ll k,ll n){
	  ll result;
	  if(pow(mid,k)<=n)
	  return true;
 return false;
}
int main(){
ll t;
cin>>t;
while(t--){
	ll n,s,e,k,i,x,ans,mid;
cin>>n;
cin>>k;
      s=1;
      e=n/k;
      while(s<=e){
      	mid=(s+e)/2;
      	if(isvalid(mid,k,n)){
      	   ans=mid;
		  	s=mid+1;
		  }
      	else
      	   e=mid-1;
      	
	  }
   cout<<ans<<endl;
   }
}
