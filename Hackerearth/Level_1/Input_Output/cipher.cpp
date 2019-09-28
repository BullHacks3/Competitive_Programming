#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string k;
int num;
cin>>k>>num;

for(int i=0;i<k.length();i++)
{
   if(k[i]>=65 and k[i]<=90)
     {
     k[i]=k[i]-64;
     k[i]=(k[i]+num)%26;
     if(k[i]==0)
          k[i]=90;
     else
         k[i]=k[i]+64;
     
         }
   else if(k[i]>=97 and k[i]<=122)
     {
       k[i]=k[i]-96;
       k[i]=(k[i]+num)%26;
          if(k[i]==0)
          k[i]=122;
     else
         k[i]=k[i]+96;
    }
   else if(k[i]>=48 and k[i]<=57)
     {
        k[i]=k[i]-47;
        k[i]=(k[i]+num)%10;
          if(k[i]==0)
             k[i]=57;
           else
         k[i]=k[i]+47;
     }
}
cout<<k<<endl;
return 0;
}
