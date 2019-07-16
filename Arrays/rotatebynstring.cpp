//rotate by n characters
#include<iostream>
using namespace std;
int main(){
  int n,i,j,k,N=0;
  char a[20],t;
   cin>>a;
   for(i=0;a[i]!='\0';++i)
       N++;
     cout<<"enter number of characters to reverse"<<endl;
     cin>>n;
     for(i=0;i<N;i=i+n){
          for(j=i,k=i+n-1;j<=k;j++,k--){

            t=a[k];
            a[k]=a[j];
            a[j]=t;
          }

        }

              cout<<a;

     }

