/* Divisible Sum Pairs Problems :- */
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
void sum_pairs(vector<int> a,int n,int k)
{
int i;
int sum=0;
rep(i,0,n,1)
    {
    	int m=a[i];
       for(int j=i+1;j<n;j++)
       {
            if((m+a[j])%k==0)
            	sum++;
       }
   }
cout<<sum<<endl;







}
int main()
{
	int n,k,i;
	cin>>n>>k;
	vector<int> w(n);
   rep(i,0,n,1)
   {
   	cin>>w[i];
   }
   sum_pairs(w,n,k);

	return 0;
}