#include<iostream>
using namespace std;
bool visited[1000][1000]={0},s[1000][1000]={0};
bool ratcheese(char m[][1000],int r,int c,int i,int j){
	if(i==r-1&&j==c-1){
	   s[i][j]=1;
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				cout<<s[i][j]<<" ";
			}
		  cout<<endl;
		}
		cout<<endl<<endl;
	   return true;
	}
	if(i==r)
	return false;
	if(j==c)
	return false;
	s[i][j]=1;
	visited[i][j]=1;
	//Move up,left,right,down
   //Move right
      if(m[i][j+1]=='O'&&!visited[i][j+1]){
          if(ratcheese(m,r,c,i,j+1))
     	 return true;
	  }
	  if(m[i+1][j]=='O'&&!visited[i+1][j]){
	     if(ratcheese(m,r,c,i+1,j))
     	 return true;	
	  }
	  if(m[i][j-1]=='O'&&j-1>=0&&!visited[i][j-1]){
	  	 if(ratcheese(m,r,c,i,j-1))
     	 return true;
	  }
     if(m[i-1][j]=='O'&&i-1>=0&&!visited[i-1][j]){
     	 if(ratcheese(m,r,c,i-1,j))
     	 return true;
	 }
   s[i][j]=0; //Backtrack
 return false;
}
int main(){
   int r,c,i,j;
   char m[1000][1000];
   cin>>r>>c;
    for(i=0;i<r;i++){
    	for(j=0;j<c;j++){
    		cin>>m[i][j];
		}
	}
	if(!ratcheese(m,r,c,0,0))
	cout<<-1;
return 0;
}

