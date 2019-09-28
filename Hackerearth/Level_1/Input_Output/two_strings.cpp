#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
 string a,b;
 cin>>a>>b;
 int A[26]={0};
 int B[26]={0};
  for(int i=0;i<a.length();i++)
    A[a[i]-97]++;
  for(int i=0;i<b.length();i++)
   B[b[i]-97]++;
  int flag=0;
for(int i=0;i<26;i++)
{
  if((A[i]-B[i])==0)
    {
   flag=1;
     }
  else
   {
   flag=0;
   break;
   }
}
if(flag==0)
  cout<<"NO"<<endl;
else
  cout<<"YES"<<endl;
}
return 0;
}
