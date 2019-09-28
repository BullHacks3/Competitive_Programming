/* Name :- Bakul Gupta
   College:- Raj Kumar Goel Institute Of Technology 
   City :- Ghaziabad
   Email :- bakulgupta3@rkgit.edu.in */

#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
int main()
{
 int t,n,k,i;
  cin>>t;
  while(t--)
  {
    cin>>n>>k;
    int A[n],m=0;
    rep(i,0,n,1)
       cin>>A[i];
    sort(A,A+n);
    	if(A[0]==0)
    	{
         rep(i,1,n-1,1)
           {
        	  if((A[i]+1)!=A[i+1])
        	     {   
        	  	m=1;
        		cout<<A[i]+1<<endl;
        		break;
        	   }

         }
           if(m==0 and n!=1)
           	cout<<A[i]+1<<endl;
           else if(m==0 and n==1)
           	cout<<1<<endl;
         }
    else
        cout<<0<<endl;
    else
    {
       

    	rep(i,0,n,1)
    	{
    		if(k!=0 and ((A[i]+1)!=A[i+1]))
    	       k--;
    	    else if(k==0 and ((A[i]+1)!=A[i+1]))
    	      {m=1;
    	      	cout<<A[i]+1<<endl;
    	      	break;
    	      }
    	}
    }

   }
return 0;
}