#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int p;
	cin>>n;
	cin>>p;
	int beg;
     int end;
	beg=floor(p/2);
	if(p%2==0)
		p=p+1;
	end=ceil((n-p)/2.0);
        
	if(beg>end)
		cout<<end<<endl;
	else
		cout<<beg<<endl;
	return 0;
}