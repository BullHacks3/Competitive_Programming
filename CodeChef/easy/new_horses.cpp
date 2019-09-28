#include<iostream>
#include<algorithm>
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
using namespace std;
int main()
{
int t,i;
cin>>t;
int min=0;
while(t--)
 {
int n;
cin>>n;
int A[n];
rep(i,0,n,1)
cin>>A[i];
sort(A,A+n);
min=A[1]-A[0];
rep(i,2,n,1)
 if(min> A[i]-A[i-1])
  min=A[i]-A[i-1];
cout<<min<<endl;
}
return 0;
}

