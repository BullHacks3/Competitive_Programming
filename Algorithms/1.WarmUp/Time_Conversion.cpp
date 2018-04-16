#include<bits/stdc++.h>
using namespace std;
void timecoversion(string s)
{

int l=s.length();
int k=0,j=1;
for(int i=1;i>=0;i--)
 {
   int d=s[i]-48;
   k=k+d*j;
   j=j*10;
}

int w=0;
	if(s[l-2]=='P' and s[l-1]=='M') 
               w=1;
    if(s[l-2]=='A' and s[l-1]=='M')        
               w=2;
if( (w==1 and k==12)|| (w==2 and k!=12))
{
for(int i=0;i<l-2;i++)
	cout<<s[i];	
}
else
{         
k=k+12;
if(k==24)
{
	s[0]=48;
     s[1]=48;
}
else
{
	s[1]=k%10+48;
     s[0]=(k/10)%10 +48;
}

for(int i=0;i<l-2;i++)
	cout<<s[i];
}
}
int main()
{
	string s;
	cin>>s;
	timecoversion(s);
	return 0;
}