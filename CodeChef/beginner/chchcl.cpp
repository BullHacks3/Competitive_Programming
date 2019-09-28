/*  Name :- Bakul Gupta */

#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
typedef long long ll;
int main()
{
	int t;  //Should be greater than 1 and less than 100;
 ll n,m;
 cin>>t;
 while(t--)
 	 {
 	 	cin>>n>>m;
 	 	if(n%2!=0 and m%2!=0) //Means the chocolate cannot be divided
 	 	{
 	 		cout<<"No"<<endl;
 	 	}
 	 else
 	 cout<<"Yes"<<endl;
 	 }
 	 return 0;
}