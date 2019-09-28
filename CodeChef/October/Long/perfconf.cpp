//Name :- Bakul Gupta //

#include<bits/stdc++.h>
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
using namespace std;

int main()
{
	//t denotes the number of test cases
	unsigned int t;
	 unsigned long long d;
	cin>>t;

	//n -> number of problems
	//p->number of participants
   while(t--)
   {
	unsigned int n,i;
	unsigned long long p;
     cin>>n;
     cin>>p;
      
     unsigned int cakewalk=0,cakehard=0;
     unsigned long long pe,ph;
     pe=p/2;
     ph=p/10;
       unsigned int k=n;
       rep(i,0,k,1)
             {
             	cin>>d;
             	 if(d<=ph)
             	 	 cakehard++;
             	 else if (d>=pe)
             	 	  cakewalk++;
              }
       if( (cakewalk==1 and cakehard==2))
   	     cout<<"yes"<<endl;
   	      else
   		cout<<"no"<<endl;
          
    } 
	return 0;
}