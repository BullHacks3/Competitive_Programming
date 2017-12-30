#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
#define repp(i,a,b,c) for(i=a;i>=b;i-=c)
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
int n,d,m,ans=0,sum=0;
int i,j;
cin>>n>>d;
int A[n];
rep(i,0,n,1)
 {
  cin>>A[i];
  sum+=A[i];
 }
sort(A,A+n);
if(sum%n==0)
   {
    m=(sum/n);
     rep(i,0,n,1)
         {
           rep(j,0,n,1)
             {
                 
                if(j>i and (j-i) == d)
                  {
            
                   if(A[j]>m and A[i]<A[j])
                       {
                     ans++;
                       A[i]++;
                       A[j]--;
                       }
                    if(A[i]>m and A[i]>A[j])
                           {
                        ans++;
                         A[j]++;
                          A[i]--;
                             }
                       }
               }
         }
 cout<<ans<<endl;    
}
else
cout<<-1<<endl;
}
return 0;
}




