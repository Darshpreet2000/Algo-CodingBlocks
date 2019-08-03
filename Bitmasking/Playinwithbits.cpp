//Playing with bits
#include<iostream>
using namespace std;
int main(){
	int i,j,a,b,count=0;
	cin>>a;
	cin>>b;
	for(j=a;j<=b;j++){
	 i=j;
	 while(i>0){
		if(i&1)
		   count++;
		   i=i>>1;
	  }
	}
cout<<count;
return 0;
}

