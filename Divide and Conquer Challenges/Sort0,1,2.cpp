//Sort array of 0,1,2
#include<iostream>
using namespace std;
int main(){

  int l,h,mid,n,i,a[100];
  cin>>n;
  for(i=0;i<n;i++)
     cin>>a[i];
     l=0,mid=0,h=n-1;
       while(mid<=h){
        if(a[mid]==1)
            mid++;
        else if(a[mid]==2){
            swap(a[mid],a[h]);
            h--;
        }
        else if(a[mid]==0){

            swap(a[mid],a[l]);
            mid++,l++;
        }

    }

      for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}
