#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
long int answer=1,k,in;
k=pow(10,9);
while(t--)
{
cin>>in;
answer=(answer*in)%(k+7);
}
cout<<fixed<<answer<<endl;
return 0;
}
