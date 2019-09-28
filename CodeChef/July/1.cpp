#include<iostream>
#include<cmath>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<=b;i+=c)
int main()
{
int a,b,d,j,k,m;
cin>>a>>b;
int count=0;
rep(j,1,a,1)
  {
         rep(k,1,b,1)
              d=j*j+b;
              m=sqrt(d);
             if(m*m==d)
               count++;
   }
if(count!=0)
cout<<count<<endl;
else
cout<<2<<endl;
return 0;
}
