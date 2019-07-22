//compress a string
#include<iostream>
using namespace std;
int main(){
      //create a hash table
      int n,i,b[26]={0};
      char a[100];
      cin>>a;
      for(i=0;a[i]!='\0';++i){
          n=a[i]-'a';
         b[n]++;
      }

    for(i=0;i<26;++i){

        if(b[i]>=1){
       char c=i+'a';
        cout<<c<<b[i];
        }
    }

}
