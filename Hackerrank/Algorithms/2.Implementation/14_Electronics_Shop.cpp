#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
int main()
{
	int b,n,m;
	cin>>b>>n>>m;
	int k[b],u[m];
     int i;
     rep(i,0,n,1)
      cin>>k[i];
     rep(i,0,m,1)
      cin>>u[i];
      int max=0,q=0,j;
      for(i=0;i<n;i++)
      {
      	for(j=0;j<m;j++)
      	{
      		q=k[i]+u[j];
           if(q<=b and max<q)
           	 {
           	 	max=q;
           	 }
      	}
      }
      if(max==0)
      	cout<<-1<<endl;
      else
      	 cout<<max<<endl;
	return 0;
}