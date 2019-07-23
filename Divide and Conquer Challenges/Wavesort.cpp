//Wave sort
#include<iostream>
using namespace std;
int main(){
  int n,i,a[100];
  cin>>n;
  for(i=0;i<n;++i){
    cin>>a[i];
  }
   for(i=0;i<n;i+=2){
      if(a[i]<a[i-1]&&i>0)
           swap(a[i],a[i-1]);
           if(a[i]<a[i+1]&&i<n-1)
            swap(a[i],a[i+1]);
   }
   for(i=0;i<n;i++)
    cout<<a[i]<<" ";
}
