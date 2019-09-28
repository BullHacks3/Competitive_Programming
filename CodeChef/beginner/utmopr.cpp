#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
typedef unsigned long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

ll t,k,n,j=0,sum,q=0;
cin>>t;
while(t--)
	  {
	  	sum=0;
        q=0;
	  	cin>>n>>k;
	  	ll A;
	  	rep(j,0,n,1)
	  	  {
	  	   cin>>A;
	  	   sum+=A;
	  	  }
	  	  rep(j,0,k,1)
	  	   {
	  	   	
	  	   	q=sum+1;
	  	    sum=sum+q;
	  	  
	  	   }
cout<<(q%2==0 ? "even":"odd")<<endl;
   }
   return 0;
}