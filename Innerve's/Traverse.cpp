#include<iostream>
using namespace std;
int main()
{
int t,k,a;
cin>>t;
while(t--)
{
int n,f,m,k;
cin>>n;
k=n-1;
if(n==0)
cout<<0<<" "<<0<<endl;
else
{
  if((n+1)%3==0)
  {
  f=(n+1)/3;
  cout<<f<<" "<<2*f-1<<endl;
  }
   if(n%3==0)
     {
   m=n/3;
   cout<<m<<" "<<2*m<<endl;
      }
   if(k%3==0)
     {
      a=(k+3)/3;
   cout<<a<<" "<<2*a-2<<endl;

    }
}

}
return 0;
}

