/*
Name :- B@kul Gupta
E-mail :- bakulgupta11@gmail.com
*/
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x1,y1,x2,y2,k=0;
		cin>>x1>>y1>>x2>>y2;
		if(x1==x2)
		{
			if(y1>y2)
				cout<<"down"<<endl;
			
			else 
				 cout<<"up"<<endl;
		}
		else if(y1==y2)
		{
			if(x1>x2)
				 cout<<"left"<<endl;
		    else
		    	  cout<<"right"<<endl;
		}
		else
			cout<<"sad"<<endl;
	}
	return 0;
}