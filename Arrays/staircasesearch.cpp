//Using staircase search
#include<iostream>
using namespace std;
int main(){
    int e,t,flag=0,a[20][20],i,j,n,m;
    cin>>m;
      cin>>n;
    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
            cin>>a[i][j];
        }
    }
     cin>>t;
     e=a[0][n-1];
     i=0; j=n-1;
     while(i<m&&j>=0)
     {   e=a[i][j];
         if(e==t){
           flag=1;
           break;
         }

        else if(t>e)
           i++;
     else if(t<e)
            j--;

     }

        if(flag==1)
        cout<<"1";
        else
            cout<<"0";

}
