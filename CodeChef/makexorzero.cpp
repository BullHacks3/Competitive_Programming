#include<iostream>
using namespace std;
int main()
{
int t,n,i;
cin>>t;
while(t--)
{
int n;
cin>>n;
int f=n;
int zero=0,one=0;
int k;
  while(n--)
    {
    cin>>k;
    if(k==0)
       zero++;
    else
       one++;
     }
if(one%2!=0)
   {
cout<<one<<endl;
   }
else
cout<<(f-one)<<endl;
}

}
