#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<b;i++)

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
int g;
cin>>g;
   while(g--)
{
int i,n,a,k;
cin>>i>>n;
cin>>a;
   if(n%2==0)
       k=(n/2);
   else
       k=(n+1)/2;
if(i==a)
 cout<<(n-k)<<endl;
else
 cout<<k<<endl;
}
}   
return 0;
}

