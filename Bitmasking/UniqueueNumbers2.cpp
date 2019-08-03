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
	   res=res^a[i];   //2^6=100
	  //find numbers with 1 at the given place
	  temp=res;
	  i=0; 
	   while(temp>0){
	   	   if(temp&1)
	   	     break;
	   	   i++;
	      temp=temp>>1;
	   }
	   
	   int mask=1<<i;
	 for(i=0;i<n;i++){
	 	  if(a[i]&mask)
	 	   f=f^a[i];
	 }
	    f=f^res;
	    s=f^res;
        cout<<f<<" "<<s;
return 0;
}

