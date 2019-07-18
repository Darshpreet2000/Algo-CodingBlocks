//spiral print anticlockwise
#include<iostream>
using namespace std;
int main(){
 int a[20][20],i,j,m,n;
      cin>>m;
      cin>>n;
      for(i=0;i<m;++i){
        for(j=0;j<n;++j){
            cin>>a[i][j];
        }
      }
      //printing in spiral form
      int sr,sc,er,ec;
      sr=0,er=m-1,sc=0,ec=n-1;
      while(sr<=er&&sc<=ec){
        for(i=sr;i<=er;++i){
            cout<<a[i][sc]<<", ";
        }
        sc+=1;
        for(i=sc;i<=ec;++i){
            cout<<a[er][i]<<", ";
        }
        er-=1;
        for(i=er;i>=sr;--i){
            cout<<a[i][ec]<<", ";
        }
        ec-=1;
        for(i=ec;i>=sc;--i){
            cout<<a[sr][i]<<", ";
        }
         sr+=1;
      }
   cout<<"END";
}
