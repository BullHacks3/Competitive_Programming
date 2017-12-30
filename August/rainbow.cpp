#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
int main()
{
int t;
cin>>t;
while(t--)
{
int n,i,m=0,j,k;
cin>>n;
int A[n];
rep(i,0,n,1)
 {
  cin>>A[i];
 }
k=(n/2);
 for(i=0,j=(n-1);i<k,j>k;i++,j--)
    {
          if((A[i]==A[j]) and((A[i+1]==A[i]) || (A[i+1]==A[i]+1))and(A[0]==1))
       	     {
       	     	if(A[i+1]==(A[i]+1))
       	        	m++;
       	     }
       	     else if(A[i]>7)
             {
                 m=0;
                 break;
             }
       	  else
       	  {
       		 m=0;
             break;
         }
    }
 if(m==6)
   cout<<"yes"<<endl;
   else
   cout<<"no"<<endl;
 }
return 0;
}
