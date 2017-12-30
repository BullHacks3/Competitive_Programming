#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<=b;i++)
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int a,b,k,j,count=0,w;
cin>>a>>b;
rep(j,1,a,1)
 {
     k=j*j+b;
     w=sqrt(k);
     count+=+w-j;
  }
cout<<count<<endl;
return 0;
}
