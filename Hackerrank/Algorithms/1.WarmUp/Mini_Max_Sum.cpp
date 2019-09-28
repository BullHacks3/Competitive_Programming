#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	long int A[5];
	long int sum=0;
	for(i=0;i<5;i++)
	{
         cin>>A[i];
         sum+=A[i];
	}

	long int min=99999999999,max=-1;
	long int k=sum;
	for(i=0;i<5;i++)
	{
      k=sum-A[i];
       if(min>k)
       	 min=k;
       if(max<k)
          max=k;
    }
    cout<<min<<" "<<max<<endl;
	return 0;
}