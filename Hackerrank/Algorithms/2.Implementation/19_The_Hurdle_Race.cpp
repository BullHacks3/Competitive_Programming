#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n; //Denotes the number of hurdles
	cin>>k; //Denotes the maximum height

	int max=INT_MIN;
	while(n--)
	{
		int a;
		cin>>a;
		if(max<a)
		{
			max=a;
		}
	}

	if(max>k)
		cout<<max-k<<endl;
	else
		cout<<0<<endl;
	return 0;
}