#include<iostream>
using namespace std;
int main()
{
int t,f=0,te=0;
cin>>t;
string s1,s2;
while(t--)
{
te=0;
f=0;
cin>>s1>>s2;
int i=0,j=0;
int cct[26]={0};
char cctil[26];
           if(s1==s2)
          {   
           cout<<"YES"<<endl;
           continue;
           }
for(i=0;i<s1.size();i++)
        cct[s1[i]-97]=1;
for(i=0;i<26;i++)
        {
        if(cct[i]==1)
             te++;
        cctil[i]='0';
         
}    
        if(te==26)
             {
            cout<<"NO"<<endl;
              continue;
                }
for(i=0;i<s1.size();i++)
{
     if(cctil[s1[i]-97]=='0') 
           {
    for(j=0;j<26;j++)
              {
       if(cctil[j]==s2[i])
         {
         f=1;
         break;
         }
             }
if(f==1)
{
cout<<"NO"<<endl;
break;
}
 cctil[s1[i]-97]=s2[i];
}
else
   if(cctil[s1[i]-97]!=s2[i])
         {
        cout<<"NO"<<endl;
          f=1;
        break;
         }
}
if(f==0)

cout<<"YES"<<endl;

}
return 0;
}
   









