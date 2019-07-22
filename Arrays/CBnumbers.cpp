//CB numbers
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
string a;
bool valid(string str){
    int i,j;
  for(i=0;str[i]!='\0';++i){
     for(j=0;a[j]!='\0';++j){
        if(str[i]==a[j])
            return false;
     }
  }
    a=str;
return true;
}
long int i,d,p,n=0;
int s[10]={2,3,5,7,11,13,17};
bool check(string b){
        d=0;
        p=1;
        n=b.length();
        for(i=n-1;i>=0;--i){
            d=d+(int)(b[i]-'0')*p;
            p=p*10;
        }
       if(d==0||d==1)
         return false;
       else {
        for(i=0;i<7;++i){
             if(d==s[i])
             return true;
             else if(d%s[i]==0)
                return false;
        }
       }
   return true;
}
int main(){
long long int i,c,j,n=0,count=0,k,a[20],p;
string b;
cin>>n;
    cin>>b;// string entered

    //Generating all substrings
    for(i=0;b[i]!='\0';++i){
        for(j=0;j<b[j]!='\0';j++){
            p=0;
         char str[10]={0};
            for(k=i;k<=j;k++){
            str[p++]=b[k];
            }
         c=check(str);  //Checking if it is coding blocks number
        if(c==true){
            int e=valid(str);  //to check if it does not contain substring of any other number
            if(e==true)
                count++;
        }

    }

    }
  cout<<count;
}
