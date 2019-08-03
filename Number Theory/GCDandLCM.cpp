//GCD and LCM
#include<iostream>
using namespace std;
int gcd(int a,int b){
	if(b==0)
	  return a;
	return gcd(b,a%b);  
}
   void lcm(int a,int b,int gc){
   	int lc;
   	lc=(a*b)/gc;
   	cout<<lc;
   }
int main(){
	int gc,a,b;
	cin>>a>>b;
	gc=gcd(a,b);
	cout<<gc<<endl;
     lcm(a,b,gc);
return 0;
}

