//string max frequency
//using hash table
#include<iostream>
using namespace std;
int main(){
    int max=0,b[26]={0},index,i;
char a[100],ch;
   cin>>a;
    for(i=0;a[i]!='\0';++i){

        index=a[i]-'a';
        b[index]++;
    }
   for(i=0;i<26;++i){
         if(b[i]>max){
            max=b[i];
            index=i;
         }

   }
          ch=index+'a';
          cout<<ch;
}
