#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int t;
	int k[6]={0};
	while(n--)
	{
		cin>>t;
		k[t]++;
	}
	int max=-1,index=-1;
	for(int i=0;i<6;i++)
	{
         if(max<k[i])
         {
         	max=k[i];
         	index=i;
         }
	}
	cout<<index<<endl;
	return 0;
}