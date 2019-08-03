//Power O(LOGN)
#include<iostream>
using namespace std;
int main(){
	int res=1,sum,n,x,y,i,a,b;
	cin>>a>>b;
	while(b>0){
		if(b&1)
		res=res*a;
		a=a*a;
		b=b>>1;
	}
	cout<<res;
return 0;
}

