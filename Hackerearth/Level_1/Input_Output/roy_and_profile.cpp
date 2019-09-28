#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int l;
cin>>l;
int n;
cin>>n;
while(n--)
{
 int a,b;
  cin>>a>>b;
if (a<l || b<l)
    cout<<"UPLOAD ANOTHER"<<endl;
else if( a>=l and b>=l)
   if(a==b)
   cout<<"ACCEPTED"<<endl;
   else
   cout<<"CROP IT"<<endl;
}
return 0;
}
