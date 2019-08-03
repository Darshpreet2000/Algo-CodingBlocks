//Prateek loves candy
#include<iostream>
using namespace std;
int main(){
	int t;
    	bool a[1000000];
	long long int n,b[100000],i,j;
	
	   a[0]=0,a[1]=0;
	   a[2]=1;
	for(i=3;i<=1000000;i+=2)
	   a[i]=1;
	 for(i=3;i<=1000000;i+=2){
	      if(a[i]){
	      	for(j=i*i;j<1000000;j+=2*i)
	      	    a[j]=0;
		  }	
	 }
	 j=0;
	 for(i=2;i<1000000;i++){
	 	if(a[i]){
		 b[j++]=i;
		 }
	 }
	cin>>t;
  while(t--){
    cin>>n;
    cout<<b[n-1]<<endl;
 }
return 0;
}

