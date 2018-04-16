#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n;
	for(int i=0;i<n;i++)
	{
      cin>>k;
      if(k>=38)
      {
      	if(k%5>=3)
      		k=k+(5-k%5);
      }
     cout<<k<<endl;


	}
	return 0;
}