#include<iostream>
using namespace std;
#define ll long long
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
#define repp(i,a,b,c) for(i=a;i>b;i-=c)

int main()
{
ll tt=0,t;
cin>>t;
rep(tt,0,t,1)
{
 string s1,s2;
 cin>>s1>>s2;
   if(s1==s2)
      {
        cout<<"Yes"<<endl;
        continue;
       }

ll i=0,j=0,flag=0,count[26]={0},temp=0;
 char a[2][26];
rep(i,0,26,1)
    a[0][i]=char(i+97);
rep(i,0,26,1)
     a[1][i]='0';
rep(i,0,s1.size(),1)
    count[ s1[i]-97]=1;
rep(i,0,26,1)
   if(count[i]!=0)
       temp++;
if(temp==26)
   {
cout<<"No"<<endl;
  continue;
   }
rep(i,0,s1.size(),1)
   {
if(a[1][s1[i]-97]=='0')
       {
           rep(j,0,26,1)
          {
             if(a[1][j]==s2[i])
                {
                   cout<<"No"<<endl;
                   flag=1;
                    break;
                  }
            }
if(flag==1)
    break;
a[1][s1[i]-97]=s2[i];
}
else
    if(a[1][s1[i]-97]!=s2[i])
       {

cout<<"No"<<endl;
flag=1;
break;
         }
}
if(flag==0)
{
  cout<<"Yes"<<endl;
}
return 0;
}


      

