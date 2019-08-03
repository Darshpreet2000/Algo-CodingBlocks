//Divisible subarrays
#include<iostream>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
	long long int f[100000]={0},no,res=0,sum=0,n,i,a[100000];
	cin>>n;
	for(i=0;i<n;i++)
	  cin>>a[i];
	  f[0]=1;
	for(i=0;i<n;i++){
	      sum+=a[i];
	      sum=sum%n;
	      sum=(sum+n)%n;
	      a[i]=sum;
	       f[a[i]]++;
	}	
	    for(i=0;i<n;i++){
	    	no=f[i];
			res+=no*(no-1)/2;
		}
	 cout<<res<<endl;
  }
return 0;
}

