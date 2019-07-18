//Broken calculator
#include<iostream>
using namespace std;
long long int res[10000];
int res_s=1;
int multiply(int);
void fact(int n){
    int i,c=0;
       res[0]=1;
    for(i=2;i<=n;++i){
        multiply(i);
    }
    for(i=res_s-1;i>=0;--i){
        cout<<res[i];
    }

}
int multiply(int x){
   int p=0,i,carry=0;
   for(i=0;i<res_s;++i){
    p=res[i]*x+carry;
    res[i]=p%10;
    carry=p/10;
   }
    while(carry){
        res[res_s]=carry%10;
        carry=carry/10;
        res_s++;

    }

}
int main(){
       int n;
       cin>>n;
       fact(n);
}
