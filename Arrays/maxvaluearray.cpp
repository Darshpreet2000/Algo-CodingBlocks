#include<iostream>
using namespace std;
int main() {
     int n,m,a[100][100],i,j;
    cin>>n;
	cin>>m;
	for(i=0;i<n;++i){
		for(j=0;j<m;++j){
          cin>>a[i][j];
		}
	}
     //print column wise wave
	 for(j=0;j<m;++j){
		 if(j%2==0)
		 for(i=0;i<n;++i){
			 cout<<a[i][j]<<", ";
		 }
	    else if(j%2!=0){
			for(i=n-1;i>=0;--i){
				cout<<a[i][j]<<", ";
			}
		}
 	 }
 cout<<"END";

	return 0;
}
