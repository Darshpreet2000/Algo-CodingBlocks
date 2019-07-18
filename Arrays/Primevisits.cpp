//Prime visits
#include<iostream>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
   long long int a,b,i,j;
//using sieve of eratosthenes
cin>>a;
cin>>b;
  long long int isprime[b],count=0;
  //initialise all numbers as prime
  for(i=2;i<=b;++i){

    isprime[i]=1;
  }
    for(i=2;i*i<=b;++i){
        //check all numbers
        if(isprime[i]==1){
             for(j=i;i*j<=b;++j){
              isprime[i*j]=0;

         }
       }
    }
  for(i=a;i<=b;++i){
    if(isprime[i]==1)
        count++;
  }
cout<<count;
}
}
