#include<bits/stdc++.h>
using namespace std;
char magical_word(char &s)
{
int k=int(s);
int big=k,flag=0;
while(big>=65 and big<90)
{
big++;
for(int i=2;i<(big/2);i++)
  {
    if(big%i==0)
      {
      flag=0;
      break;
      }
    else
      {
      flag=1;
      }
  }
if(flag==1)
   {
   break;
  }
}
int less=k;
while(less>65 and less<=90)
{;
for(int i=2;i<(less/2);i++)
  {
    if(less%i==0)
      {
      flag=0;
      break;
      }
    else
      {
      flag=1;
      }
  }
if(flag==1)
   {
   break;
  }
less--;
}

if ( ((k-less) <= (big-k)) and ((k-less)!=0))
   cout<<char(less);
else
   cout<<char(big);

return 0;
}






int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t; // t denotes the number of test cases
while(t--)
{
int n;
cin>>n; 
string s;
 cin>>s;
for(int i=0;i<s.length();i++)
{
  magical_word(s[i]);
}
cout<<endl;
}
return 0;

}
