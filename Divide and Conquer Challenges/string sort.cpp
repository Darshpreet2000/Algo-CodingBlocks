//String sort
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool mycompare(string s1,string s2){
	  if(s1.find(s2)==0||s2.find(s1)==0){
	  	return s1.length()>s2.length();
	  }
  return s1<s2;
}
int main(){
   string s[1000];
   int n,i,j;
   cin>>n;
   for(i=0;i<n;i++){
    cin>>s[i];
   }
      sort(s,s+n,mycompare);
    for(i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
return 0;
}
