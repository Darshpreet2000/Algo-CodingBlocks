//Maximum subarray sum 1
#include<iostream>
using namespace std;
int main(){
  int n,a[10],max=0,i,j,k,sum;
  cin>>n;
  for(i=0;i<n;++i)
   cin>>a[i];
       for(i=0;i<n;++i){

        for(j=i;j<n;++j){
                sum=0;
            for(k=i;k<=j;++k){
                sum+=a[k];
            }
             if(sum>max)
             max=sum;
        }
       }

    cout<<max;
}
