//chewbacca numbers
#include<iostream>
using namespace std;
int main(){
int i;
char c[50];
cin>>c;
    i=0;
    if(c[i]=='9')
        i++;
    while(c[i]!='\0'){
        int d=c[i]-'0';   //converts char to int
        if(d>=5)
            d=9-d;
        c[i]=d+'0';   //converts to int
        i++;
    }
      cout<<c<<endl;
}
