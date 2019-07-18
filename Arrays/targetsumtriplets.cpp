//Target sum triplets
#include<iostream>
#include<algorithm>
using namespace std;
void printmin(int a,int b,int c){

   int i=0,d[3]={a,b,c};
   sort(d,d+3);

    cout<<d[0]<<", "<<d[1]<<" and "<<d[2]<<endl;
}
int main(){

   int n,i,sum,a[20],j,k;
   cin>>n;
   for(i=0;i<n;++i){
    cin>>a[i];
   }
   cin>>sum;
   sort(a,a+n);
     for(i=0;i<n-2;i++){
        for(j=i+1;j<n-1;j++){
            for(k=j+1;k<n;++k){
                if(a[i]+a[j]+a[k]==sum)
                    cout<<a[i]<<", "<<a[j]<<" and "<<a[k]<<endl;
                    // printmin(a[i],a[j],a[k]);
            }
        }

     }

}


