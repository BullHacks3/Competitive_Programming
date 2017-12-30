#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m,j,k,sum;
bool ii;
int t;
cin>>t;
while(t--)
{
ii=false;
cin>>n>>m;
int A[n];
rep(j,0,n,1)
cin>>A[j];
rep(j,0,(1<<n),1)
 {
     sum=0;
     rep(k,0,n,1)
            {
                 if(j & (1<<k))
                   {
                   sum+=A[k];
                   }
              }
    if(sum==m)
     {
    ii=true;
    break;  
    }
}
if(ii)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
return 0;
}
