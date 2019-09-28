#include<bits/stdc++.h>
using namespace std;
void picking_numbers(int k[],int s)
{
	sort(k,k+s);
	int count=0;
	int max=0;
	for(int i=0;i<s;i++)
    {
    	count=0;
		for(int j=i+1;j<s;j++)
		{
           if(abs(k[i]-k[j])==1 || abs(k[i]-k[j])==0)
           	 count++;
           	else
           	{
           	break;
           	}   	
		}
		if(max<count)
           		{
           			max=count;
           		  
           		}
	}
	cout<<max+1<<endl;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	picking_numbers(arr,n);
	return 0;
}