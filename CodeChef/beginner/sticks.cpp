#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
#define repp(i,a,b,c) for(i=a;i>=b;i-=c)
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 int t,i,n;
 cin>>t;
 while(t--)
 {
   cin>>n;
   int A[n];
   rep(i,0,n,1)
      cin>>A[i];
   int B[1001]={0};
   rep(i,0,n,1)
      B[A[i]]++;
      //sort(B,B+1001);
    //  rep(i,0,1001,1)
     // cout<<B[i]<<"\n";
 int k=0,p=1,m=0;
 repp(i,1000,0,1)
 {
 	if(B[i]!=0)
 	{
 	if(B[i]>=4) 	{
        if(m==1)
        {
        	p=p*i;
        m++;
        }
        else
        {
        p=i*i;
         m=2;
        }
        B[i]=B[i]-4;
        if(m==2)
 	   break;
 	}
      if(B[i]>=2)
      {
       	p=p*i;
      	B[i]=B[i]-2;
      	m++;
      	if(m==2)
      		break;
      }
   } 
 }   
 if(m!=2)
cout<<-1<<endl;
else
cout<<p<<endl;
 }


}