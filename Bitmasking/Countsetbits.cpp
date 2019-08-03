//Count set bits
#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
while(t--){
	int n,temp,count=0;
	cin>>n;
	temp=n;
	while(temp>0){
		 if(temp&1)
		   count++;
		   temp=temp>>1;
	}
	cout<<count<<endl;
}
return 0;
}

