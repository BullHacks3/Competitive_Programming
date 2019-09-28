#include<iostream>
using namespace std;
//#define rep(i,a,b,c) for(i=a,i<b;i+=c)
typedef unsigned long long ll;
int main()
{
ll t,n,b,m,k,brake,left=0,bb=0,i;
cin>>t;
while(t--)
{
cin>>n;
cin>>b;
cin>>m;
ll bb=0;
ll left=0;
brake=0;
//N denotes the total number of problem
left=n;  
while(left>0)
   {
   if(left%2==0)
     k=left/2;
   else
   k=(left+1)/2;
//After solving k problems Jem will take a break
   brake+=(k*m)+b;
    left=left-k;
   m=m*2;
   }
i=brake-b;
cout<<i<<"\n";
}
return 0;
}
