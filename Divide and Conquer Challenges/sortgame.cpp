//Sort Game
#include<iostream>
#include<algorithm>
using namespace std;
bool mycompare(pair<string,int> p1,pair<string,int> p2){

     if(p1.second==p2.second){
        return p1.first<p2.first;
     }
      return p1.second<p2.second;
}
int main(){
pair <string,int> emp[10000];
string name;
int salary;
int i=0,x,N;
cin>>x;
cin>>N;
    for(i=0;i<N;i++){
        cin>>name>>salary;
       emp[i].first=name;
       emp[i].second=salary;
    }

   sort(emp,emp+N,mycompare);
      for(i=0;i<N;i++){
        if(emp[i].second>=x){
            cout<<emp[i].first<<" "<<emp[i].second<<endl;
        }

      }
}
