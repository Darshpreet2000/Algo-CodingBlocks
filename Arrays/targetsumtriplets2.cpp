//target sum triplets
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
     int a[30],sum,n,i,l,r;
     cin>>n;
     for(i=0;i<n;++i){
        cin>>a[i];
     }
     cin>>sum;
     sort(a,a+n);
    for(i=0;i<n;++i){
        l=i+1;
        r=n-1;
        while(l<r){
            if(a[i]+a[l]+a[r]==sum){
                cout<<a[i]<<", "<<a[l]<<" and "<<a[r]<<endl;
            l++; r--;
            }
                else if(a[i]+a[l]+a[r]>sum)
                      r--;
                      else if(a[i]+a[l]+a[r]<sum)
                        l++;
        }

    }

}
