#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int a,b,c;
	int z,z1;
	while(t--)
	{
		cin>>a>>b>>c;
         z=abs(c-a);
         z1=abs(c-b);

         if(z==z1)
         	cout<<"Mouse C"<<endl;
         else if(z<z1)
         	cout<<"Cat A"<<endl;
         else
         	cout<<"Cat B"<<endl;

	}
	return 0;
}