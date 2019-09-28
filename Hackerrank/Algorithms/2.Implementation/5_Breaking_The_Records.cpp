#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
int main()
{ 
	int n;
	cin>>n;
	int high=0,low=0;
	int highcount=0,lowcount=0;
	//vector<int> games;
	int i;
	rep(i,0,n,1)
	{
		int k;
		cin>>k;
		if(i==0)
		{
            high=k;
            low=k;
		}
		else
		{
            if(k<low)
            {
            	low=k;
            	lowcount++;
            }
            if(k>high)
            {
            	high=k;
            	highcount++;
            }
		}
		
	}
	cout<<highcount<<" "<<lowcount<<endl;
	return 0;
}