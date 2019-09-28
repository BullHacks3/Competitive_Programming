#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int t;
long long u,v;
int x;
long double k=0.0;
cin>>t;
while(t--)
{
cin>>u>>v>>x;
k=double(x/double(u+v));
cout<<fixed<<setprecision(10)<<k<<endl;
}
}
