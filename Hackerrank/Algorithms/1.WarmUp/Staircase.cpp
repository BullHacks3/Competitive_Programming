#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,k=n;
   int t;
	for(i=0;i<n;i++)
	{
       t=k-1;
         while(t--)
         	cout<<" ";
         for(int j=k;j<=n;j++)
         	cout<<"#";
         cout<<endl;
         k--;
	}
	return 0;
}