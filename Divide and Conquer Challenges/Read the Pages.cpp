//Read the pages
#include<iostream>
#define ll long long int
ll isvalidconfig(ll books[],ll n,ll m,ll mid){
	ll k,i,currpages=0,students=1;
	for(i=0;i<n;i++){
		if(currpages+books[i]>mid){
			students++;
            currpages=books[i];
            if(students>m)
            return false;
		}
		else{
			currpages+=books[i];
		}
	
	}
	return true;
}
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
	ll s,e,mid,m,n,ans,sum=0,i;
	cin>>n;
	cin>>m;    ///N is pages m is students
	ll a[n];   
   	for(i=0;i<n;i++){
   		cin>>a[i];
	   }
	//Using binary search I have to assign each student with
	// pages such that each gets mininmum pages to read
	sum=0;
	for(i=0;i<n;i++){
		sum+=a[i];
	}
	 s=a[n-1]; e=sum;
	 mid=(s+e)/2;
   while(s<=e){
	  mid=(s+e)/2;
	   if(isvalidconfig(a,n,m,mid)){
	        //true
		   //search in left
		e=mid-1;
	  ans=mid;	   	
	   }
       else{  //false
       	//search in right
       	s=mid+1;
	   }
   } 

   cout<<ans;
  }
}

