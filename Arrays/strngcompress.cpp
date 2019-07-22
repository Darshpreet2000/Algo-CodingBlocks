//compress a string
#include<iostream>
using namespace std;
int main(){
      //create a hash table
      int n=0,i,count=1,b[26]={0};
      char a[100];
      cin>>a;
      for(i=0;a[i]!='\0';++i)
        n++;
    for(i=0;i<n;i++){
        count=1;
        while(a[i]==a[i+1]){
            if(a[i]==a[i+1])
                count++;
            i++;
        }

      cout<<a[i]<<count;
    }


}
