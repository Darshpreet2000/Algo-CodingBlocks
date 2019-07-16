//To check if a number is prime using functions
#include<iostream>
using namespace std;
void generate(int a){
     int i,j,flag=1;
         for(i=2;i<a;++i){

            for(j=2;j<=i/2;++j){

                if(i%j==0)
                    flag=0;
            }
         if(flag==1)
            cout<<i;
         flag=1;
         }
}
    int main(){
      int n;
      cout<<"enter";
      cin>>n;
      generate(n);
  return 0;
    }


