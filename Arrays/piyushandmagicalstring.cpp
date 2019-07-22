//piyush and magical park
#include<iostream>
using namespace std;
int main(){
   int s,k,m,n,i,j;
  char a[100][100];
  cin>>n;
  cin>>m;
     cin>>k;
     cin>>s;
     for(i=0;i<n;++i){
        for(j=0;j<m;++j){
            cin>>a[i][j];
        }
     }

    for(i=0;i<n;++i){
       for(j=0;j<m;++j){
          if(s<k)
            break;
      else
         if(a[i][j]=='*')
            s=s+4;
         else if(a[i][j]=='.')
             s=s-3;
         else if(a[i][j]=='#')
            break;

    }

}


       if(s>k){
        cout<<"Yes"<<endl;
       cout<<s;
       }
       else
        cout<<"No";
}
