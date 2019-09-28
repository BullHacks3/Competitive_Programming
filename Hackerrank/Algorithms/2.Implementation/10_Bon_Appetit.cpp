#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
      int sum=0;
      int leave=0;
      int price;
	for(int i=0;i<n;i++)
	{
       cin>>price;
       sum+=price;
       if(k==i)
       	 leave=price;
	}
    sum/=2;
    leave/=2;
    int pay=sum-leave;
    int given;
    cin>>given;

    if(given>pay)
    	cout<<(given-pay)<<endl;
    if(given==pay)
    	cout<<"Bon Appetit"<<endl;
	return 0;
}