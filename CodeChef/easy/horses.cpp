#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t,n,i,min,j;
cin>>t;
while(t--)
{
cin>>n;
int A[n];
min=0;
rep(i,0,n,1)
cin>>A[i];
rep(i,0,n,1)
   {
     if(i==0)
       min=abs(A[1]-A[0]);
   rep(j,i+1,n,1)
           {
         if(min > abs(A[i]-A[j]))
            min=abs(A[i]-A[j]);
           }
   }
cout<<min<<endl;
}
return 0;
}










