#include<bits/stdc++.h>
using namespace std;
#define repp(i,a,b,c) for(i=a;i<=b;i+=c)
#define rep(i,a,b,c) for(i=a;i<=b;i+=c)
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL); 
int t,n,m,j,k,temp;
cin>>t;
while(t--)
{
cin>>n>>m;
//m denotes the jobs that already have been completed

//n denotes the jobs need to be completed

int A[n+1]={0};
repp(j,1,m,1)
 {
  cin>>k;
   A[k]=1;
 }
k=1;

int B[n-m+1];
repp(j,1,n,1)
  {
   if(A[j]==0)
        {
      B[k]=j;
         k++;
        }
  }
k=k-1;
repp(j,1,k,1)
       repp(m,j,k,1)
             {
                 if(B[j]>B[m])
                    {
                  temp=B[j];
                   B[j]=B[m];
                   B[m]=temp;
                   }
             }
repp(j,1,k,2)
cout<<B[j]<<" ";
cout<<endl;
repp(j,2,k,2)
cout<<B[j]<<" ";
cout<<endl;
}
return 0;
}
