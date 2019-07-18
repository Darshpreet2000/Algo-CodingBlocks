//Rotate image by 90 degrees
#include<iostream>
using namespace std;
int main(){
    int a[20][20],i,j,n;
    cin>>n;
    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
            cin>>a[i][j];
        }
    }
     //rotating
     int t,k;
     i=0,j=0;
     for(i=0;i<n/2;++i){
        for(j=i;j<n-i-1;++j){
          t=a[i][j];
          a[i][j]=a[j][n-i-1];
          a[j][n-i-1]=a[n-i-1][n-j-1];
          a[n-i-1][n-j-1]=a[n-j-1][i];
          a[n-j-1][i]=t;
        }
     }




  for(i=0;i<n;++i){
        cout<<endl;
    for(j=0;j<n;++j){
        cout<<a[i][j]<<" ";
    }
  }
}
