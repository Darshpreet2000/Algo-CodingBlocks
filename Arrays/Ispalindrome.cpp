//Is palindrome
#include<iostream>
using namespace std;
bool check(int a[],int n){
    int i,j;
    for(i=0,j=n-1;i<j;++i,--j){
        if(a[i]!=a[j])
            return false;
    }
    return true;
}
int main(){
   int n,a[100],i,j;
   cin>>n;
   for(i=0;i<n;++i){
    cin>>a[i];
   }
   j=check(a,n);
   if(j==true)
    cout<<"true";
   else
    cout<<"false";
return 0;
}
