#include<iostream>
using namespace std;
int main()
{
int t,zero,one,i;
cin>>t;
while(t--)
{
char s[51];
cin>>s;
zero=0;
one=0;
for(i=0;s[i]!='\0';i++)
 {
    if(s[i]==48)
       {
       zero++;
       }
     else if(s[i]==49)
      {
       one++;
      }
 }
if(zero==1)
 cout<<"Yes"<<endl;
else if(one==1)
 cout<<"Yes"<<endl;
else if(zero!=1 and one!=1)
 cout<<"No"<<endl;
}
}
