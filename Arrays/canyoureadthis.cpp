//can you read this
#include<iostream>
using namespace std;
int main(){
    int i;
    char a[100];
    cin>>a;
    for(i=0;a[i]!='\0';++i){
        if(a[i]>='A'&&a[i]<='Z'){
           cout<<endl;
        }
      cout<<a[i];
    }
}
