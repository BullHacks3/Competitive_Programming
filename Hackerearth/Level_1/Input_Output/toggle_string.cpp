#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
for(int i=0;i<s.length();i++)
{
   if(s[i]>=65 and s[i]<= 90)
       s[i]=s[i]+32;
   else if(s[i]>=97 and s[i]<=122)
       s[i]=s[i]-32;
}
cout<<s<<endl;

return 0;
}
