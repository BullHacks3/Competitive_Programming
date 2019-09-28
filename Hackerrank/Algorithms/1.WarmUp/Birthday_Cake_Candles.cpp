#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,ans=0;
	int A[n],max=0;
	for(i=0;i<n;i++)
	{
		cin>>A[i];
           if(max<A[i])
           	max=A[i];
	}

//cout<<"The value of max is:- "<<max<<endl;
	for(i=0;i<n;i++)
	{
		if(max==A[i])
			 ans++;
	}
cout<<ans<<endl;
	return 0;
}