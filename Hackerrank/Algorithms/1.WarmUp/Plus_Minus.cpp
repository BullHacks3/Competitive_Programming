#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int i,k;
   int pos=0,zero=0,neg=0;
   for(i=0;i<n;i++)
   { 
     cin>>k;
     if(k>0)
     	pos++;
     else if(k<0)
         neg++;
     else
     	zero++;
   }

float a;
   a=float(pos)/n;
   cout<<fixed<<setprecision(6)<<a<<endl;
   a=float(neg)/n;
   cout<<fixed<<setprecision(6)<<a<<endl;
   a=float(zero)/n;
   cout<<fixed<<setprecision(6)<<a<<endl;
	return 0;
}