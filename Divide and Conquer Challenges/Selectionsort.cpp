#include<iostream>
using namespace std;
void swap(int* a,int* b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int main() {
       int i,mini,j,n,a[100];
	   cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
       for(i=0;i<n;i++){
		   mini=i;
		   for(j=i+1;j<n;++j){
			   if(a[j]<a[mini])
		           mini=j;
		   }
	         swap(&a[mini],&a[i]);
	   }
	    for(i=0;i<n;i++)
		cout<<a[i]<<endl;
	return 0;
}
