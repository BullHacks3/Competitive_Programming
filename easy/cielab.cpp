#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a,b,k,m;
cin>>a>>b;
k=a-b;
m=k%10;
if(m==0)
k+=1;
else if(k==1)
k=2;
else
k=k-1;
cout<<k<<endl;
return 0;
}
