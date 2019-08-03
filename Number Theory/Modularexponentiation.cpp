#include<iostream>
using namespace std;
int main(){
	long long int a,b,c,res=1;
	cin>>a>>b>>c;
	while(b>0){
		if(b&1){
		   	res=(res*a)%c;
		}
		a=a*a;
	   b=b>>1;
	}
	cout<<res;
return 0;
}

