//Unique Numbers-1
#include<iostream>
using namespace std;
int main(){
	long long int i,n,a[1000000],temp,res=0,f=0,s=0;
	cin>>n;
	for(i=0;i<n;i++)
	  cin>>a[i];
	 //do xor of all
	 for(i=0;i<n;i++)
	   res=res^a[i];
	    cout<<res;
return 0;
}
