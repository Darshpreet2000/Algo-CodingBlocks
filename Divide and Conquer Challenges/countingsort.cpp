//Counting sort
#include<iostream>
using namespace std;
int main(){
int a[100],i,n,j;
cin>>n;
int f[100]={0};
for(i=0;i<n;i++){
    cin>>a[i];
}
    for(i=0;i<n;i++){

        f[a[i]]++;
    }

 for(i=0;i<10;i++){
    if(f[i]>0){
        while(f[i]>0){
            cout<<i<<" ";
         f[i]--;
        }
    }
 }

}
