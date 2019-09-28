#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a;
	cin>>t;
	while(t--)
	{
        cin>>a;
        int k=ceil(a/2.0)+1;
        if(a==1)
        	cout<<2<<endl;
        else
        {
        if(a%2==0)
        	cout<<(1<<k)-1<<endl;
        else
        	cout<<(1<<k)-2<<endl;
	     }
	}
	return 0;
}