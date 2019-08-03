//Aggressive cows
#include<iostream>
#include<algorithm>
using namespace std;
bool isvalid(int n,int c,int a[],int mid){
     	int i;
		 int prev=a[0];
	       c--;
		 for(i=0;i<n;i++){
     		if(a[i]-prev>=mid){
     		prev=a[i];
			 c--;	
			if(c==0)
			return true;
			 }
		     
		 }
 return false;   
}
int main(){
	int s,ans,mid,e,i,n,c,a[100];
	cin>>n>>c;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	   sort(a,a+n);
       s=0;
	   e=a[n-1];
	   mid=(s+e)/2;
	   while(s<=e){
		   mid=(s+e)/2;
	   	     if(isvalid(n,c,a,mid)){
	   	     	//true
	   	     	s=mid+1;
	   	     	ans=mid;
				}
	   	      else{
	   	         //false
					e=mid-1; 	
			  } 
	   	      
       }   
  cout<<ans;		   	 
return 0;
}

