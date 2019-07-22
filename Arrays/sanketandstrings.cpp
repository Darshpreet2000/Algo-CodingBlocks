//sanket and strings
#include<iostream>
using namespace std;
int main(){
   string a;
  long long int i,k,l=0,n=0,length=0,max=0,count=0,c=0;
cin>>k;
 cin>>a;

    for(i=0;a[i]!='\0';++i){
        n++;
    }
      for(i=0;i<n;++i){

         if(a[l]!=a[i])
                    count++;
         if(count>k){
         while(count>k){
            if(a[l]!=a[i])
                count--;
            l++;
           }

         }
         if(l==0)
        length=i-l+1;
        else
            length=i-l;
         if(length>max)
            max=length;

  }
    cout<<max;
}
