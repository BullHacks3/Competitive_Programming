#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
typedef long long ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t,j=0;
ll count=0;
cin>>t;
while(t--)
{
string s;
count=0;
cin>>s;
if(s[0]==s[1])
count=1;
else
{
rep(j,2,s.size(),1)
  {
       if(j%2==0)
 {
      if(s[j]!=s[0])
         {
          count=1;
          break;
         }
}     
       else
          {
             if(s[j]!=s[1])
               {
                 count=1;
                 break;
                }
            }
 }
}
if(count!=1)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
return 0;
}
