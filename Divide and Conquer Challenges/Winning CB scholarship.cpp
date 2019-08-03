//Winning CB Scholarship
#include<iostream>
using namespace std;
#define ll long long int
bool isvalid(ll n,ll m,ll x,ll y,ll mid){
	ll total;
	  //not getting sch
	//total coupons
	total=m+(n-mid)*y;
	if(total>mid)
	return true;
return false;	
}
int main(){
   ll mid,s,e,n,m,x,y;
   // n->students m->coupons x->100% y->additional coupons
   cin>>n>>m>>x>>y;
   s=0,e=n;
   mid=(s+e)/2;
   while(s<e){
   	mid=(s+e)/2; //students who may get sch
   	   if(isvalid(n,m,x,y,mid)){
   	     //true
			//search in right to get more sch students     	
   	     	s=mid+1;
	 	 }
   	  else{
   	  	  //false search in left
   	  	e=mid-1;
		 }
    
   }
  cout<<mid;
} 

