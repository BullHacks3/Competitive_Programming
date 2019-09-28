#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t,i,k,f;
cin>>t;
while(t--)
{
int n;
cin>>n;
int A[n];
rep(i,0,n,1)
 cin>>A[i];
cin>>k;
f=A[k-1];
sort(A,A+n);
rep(i,0,n,1)
 if(A[i]==f)
  {
  cout<<i+1<<endl;
  break;
  }
}
return 0;
}
