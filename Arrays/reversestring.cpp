////Reverse a string
#include<iostream>
using namespace std;
int main(){
      char a[20],t;
      int i,j,n=0;
      cin.getline(a,20);

       for(i=0;a[i]!='\0';++i){
            n++;
       }
         for(i=0,j=n-1;i<=j;i++,j--){
            t=a[i];
            a[i]=a[j];
            a[j]=t;
         }
     cout<<a;
}
