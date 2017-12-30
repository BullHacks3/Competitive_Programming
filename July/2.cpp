#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
long long t,i,b=0,min,j,sum=0,k;
cin>>t;
while(t--)
{
sum=0;
b=0;
min=0;
long long n;
cin>>n;
long long A[n];
rep(j,0,n,1)
{
cin>>A[j];
}
sort(A,A+n);
rep(j,0,n,1)
{
sum+=A[j];
b=b|A[j];
}

if(sum>b)
cout<<b<<endl;
else
cout<<sum<<endl;
}
return 0;
}


