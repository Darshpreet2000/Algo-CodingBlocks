#include<iostream>
using namespace std;
int main(){
int n,i,j,sum,a[100];
cin>>n;
   for(i=0;i<n;++i){
    cin>>a[i];
   }
   cin>>sum;
       for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                if(a[i]<a[j])
                    cout<<a[i]<<" and "<<a[j]<<endl;
                else
                    cout<<a[j]<<" and "<<a[i]<<endl;
            }

        }
       }


}
