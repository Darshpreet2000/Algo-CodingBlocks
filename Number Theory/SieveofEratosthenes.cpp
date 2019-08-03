//Sieve of erastosthenes
#include<iostream>
using namespace std;
int main(){
    bool a[100000000];
	long long int count=0,i,n,j;
	for(i=0;i<=100000000;i++)
	    a[i]=1;
	cout<<endl;
	 for(i=1;i<=100000000;i++){
	 	a[1]=0;
	 	a[2]=1;
	 	if(a[i]){
	 	   for(j=i*i;j<=100000000;j+=i){
	 	       a[j]=0;	
		   }	
		 }
	 }
	 cin>>n;
	 for(i=1;i<=100000000;i++){
	 	if(a[i]){
	 	  count++;
		   if(count==n){
    	       cout<<i;
				 break;   	
		   }
	    }
	 }
return 0;
}

