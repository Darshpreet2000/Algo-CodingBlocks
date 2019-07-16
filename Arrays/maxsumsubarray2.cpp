//maximum subarray sum 2
#include<iostream>
using namespace std;
int main(){
     int n,i,j,max=0,sum=0,a[10],cs[10];
        // Take the cumulative sum of array and store in another array
        cin>>n;
        for(i=0;i<n;++i)
            cin>>a[i];
        for(i=0;i<n;++i){
            sum+=a[i];
            cs[i]=sum;
        }
            //print the maximum sum
            for(i=0;i<n;++i){
                for(j=i;j<n;++j){

                    sum=cs[j]-cs[i-1];
                    if(sum>max)
                        max=sum;
                }


            }

     cout<<max;

}
