#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int l,r,k;
cin>>l>>r>>k;
int count=0;
for(int i=l;i<=r;i++)
{
  if(i%k==0)
    count++;
}
cout<<count<<endl;
return 0;
}
