#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}

void getTotalX(vector<int> A,vector<int> B)
{
	int i;
	int a=A.size();
	int b=B.size();
	//cout<<"The value of a is:- "<<a<<endl;
	//cout<<"The value of b is:- "<<b<<endl;
	 int ans=A[0];
	 rep(i,1,a,1)
	 {
       ans= ((A[i]*ans)/(gcd(A[i],ans)));
     }
     //cout<<"the value of lcm is:-"<<ans<<endl;
         int w=0;  
          int k=ans;
       int gcd1=B[0];
     rep(i,1,b,1)
     {
        gcd1=gcd(B[i],gcd1);
     }
       
     while(1)
     {

           if(k>B[0])
           	 break;
           	else
           	{
           		if(gcd1%k==0)
           			w++;
           		k=k+ans;
           	}
     }
     cout<<w<<endl;

}
int main()
{
	 int a,b,i;
	 cin>>a>>b;

	 vector<int> A;
	 vector<int> B;

	 rep(i,0,a,1)
	  {
	  	int k;
	  	cin>>k;
	  	A.push_back(k);
	  }
	  //int k=A.size();
	  //cout<<"The size of a is:- "<<k<<endl;
	 rep(i,0,b,1)
	  {
	  	int k;
	  	cin>>k;
	  	B.push_back(k);
	  }

	  getTotalX(A,B);
	return 0;
}