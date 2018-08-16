#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string a;
cin>>a;
string b=a;
reverse(a.begin(),a.end());
if(b==a)
  cout<<"YES"<<endl;
else
 cout<<"NO"<<endl;

return 0;
}
