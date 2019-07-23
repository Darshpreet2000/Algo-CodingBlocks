#include<iostream>
using namespace std;
int main() {
	int n,no,a[1000],i,j;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
for(i=1;i<n;++i){
    j=i-1;
	no=a[i];
	while(j>=0&&a[j]>no){
       a[j+1]=a[j];
	--j;
	}
    a[j+1]=no;
}

 for(i=0;i<n;i++)
 cout<<a[i]<<endl;
	return 0;
}
