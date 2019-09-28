#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
int main()
{
	int n;
	cin>>n;
	int a[101]={0},i;
	int value;
	rep(i,0,n,1)
	{
    cin>>value;
    a[value]++;
	}
	int sum=0;
     rep(i,0,101,1)
     {
     	if(a[i]%2==0 and a[i]!=0)
         sum+=a[i]/2;
        else if(a[i]!=0 and a[i]>1)
        	if( (a[i]-1)>=2)
        	sum+= (a[i]-1)/2;
     }
     cout<<sum<<endl;
     return 0;
}