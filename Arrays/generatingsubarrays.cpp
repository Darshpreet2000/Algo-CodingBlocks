//generating subarray
#include<iostream>
using namespace std;
   int main(){
       int n,i,a[20],j,k;
       cin>>n;
       for(i=0;i<n;++i)
        cin>>a[i];
        for(i=0;i<n;++i){
            for(j=i;j<n;++j){
                cout<<endl;
                for(k=i;k<=j;++k)
                    cout<<a[k];
            }

        }


   }
