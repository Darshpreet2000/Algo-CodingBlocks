#include<iostream>
using namespace std;
void swap(int *a,int *b){
   int t;
   t=*b;
   *b=*a;
   *a=t;

}
int main(){
 int i,n,j,a[100];
 cin>>n;
 for(i=0;i<n;++i)
   cin>>a[i];
     //Bubble sort
     for(i=0;i<n;++i){
        for(j=0;j<n-i-1;++j){
            if(a[j]>a[j+1])
                swap(&a[j],&a[j+1]);
        }
     }
   for(i=0;i<n;++i){
    cout<<a[i];
   }
}
