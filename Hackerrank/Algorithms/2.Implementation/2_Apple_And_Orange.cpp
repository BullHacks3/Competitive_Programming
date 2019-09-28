#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
int main()
{
	int s,t;
	cin>>s>>t;
	int a,b;
	cin>>a>>b;
	int m,n;
	cin>>m>>n;
	int i,apple=0,orange=0;
     int k;
     rep(i,0,m,1)
     {
       cin>>k;
       if(  (a+k >=s) and (a+k<=t))
       	 apple++;
     }
     cout<<apple<<endl;
     rep(i,0,n,1)
     {
     	cin>>k;
     	if( (b+k)>=s and (b+k<=t))
     		orange++;
     }
     cout<<orange<<endl;
	return 0;
}