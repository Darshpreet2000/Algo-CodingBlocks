//Form the biggest number
#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
bool mycompare(string a,string b){
    string s1=a.append(b);
    string s2=b.append(a);
    return s1>s2;

}
void largest(vector <string> v,int n){
    sort(v.begin(),v.end(),mycompare);

   for(int i=0;i<n;++i)
    cout<<v[i];
	cout<<endl;
}
int main(){
  int t;
  cin>>t;
  while(t--){

   vector <string> v;
   int n,i=0;
   string a;
   cin>>n;
   while(i<n){
        cin>>a;
    v.push_back(a);
    i++;
   }
      largest(v,n);
}
}

