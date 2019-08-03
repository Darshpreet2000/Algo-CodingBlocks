//Help Rahul to search
#include<iostream>
using namespace std;
int search(int s,int e,int b[],int x){
        int mid;
        while(s<=e){
            mid=(s+e)/2;
            if(x>b[mid])
                s=mid+1;
            else if(x<b[mid])
                e=mid-1;
                else
                    return mid;
        }
   return -1;
}
int main(){

   int n,i,c,p,a[100],index,x;
   cin>>n;
   for(i=0;i<n;i++){
    cin>>a[i];
   }
    cin>>x;
      for(i=0;i<n-1;i++){

        if(a[i]>a[i+1]){
          p=a[i];
          index=i;
          break;
        }
     }
           if(x==p)
              c=index;
          else if(x<p&&x>=a[0])
            c=search(0,index-1,a,x);
            else
                c=search(index+1,n-1,a,x);
         if(c==-1)
            cout<<-1;
         else
              cout<<c;
    }
