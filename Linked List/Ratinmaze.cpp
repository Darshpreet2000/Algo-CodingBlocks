#include<iostream>
using namespace std;
bool s[1000][1000]={0},visited[1000][1000]={0};
bool ratinmaze(char m[][1000],int i,int j,int r,int c){
 	 if(i==r-1&&j==c-1){
         s[i][j]=1;
         for(i=0;i<r;i++){
         	for(j=0;j<c;j++)
         	  cout<<s[i][j]<<" ";
		    cout<<endl;
		 }
		 cout<<endl<<endl;
		 return true;
	 }
	 if(j==c)
	 return false;
	 if(i==r)
	 return false;
	 	s[i][j]=1;
	 	visited[i][j]=1;
    if(m[i][j+1]=='O'&&!visited[i][j+1]){
    	if(ratinmaze(m,i,j+1,r,c))
    	return true;
	}
	   if(m[i+1][j]=='O'&&!visited[i+1][j]){
	       if(ratinmaze(m,i+1,j,r,c))
	       return true;
	   }
  s[i][j]=0; //Backtrack
  return false;
}
int main(){
	int i,j,r,c;
	char m[1000][1000];
	cin>>r>>c;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cin>>m[i][j];
		}
	}
	if(!ratinmaze(m,0,0,r,c))
	cout<<-1;
return 0;
}
