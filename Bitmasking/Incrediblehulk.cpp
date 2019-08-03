//Incredible Hulk
#include<iostream>
using namespace std;
int main(){
	int t,n,temp,count=0;
	cin>>t;
	while(t--){
		count=0;
		 cin>>n;
		 while(n>0){
		 	if(n&1)
		 	 count++;
		 	 n=n>>1;
		 }
		cout<<count<<endl;
	}
return 0;
}

