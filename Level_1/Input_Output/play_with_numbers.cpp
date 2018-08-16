#include<bits/stdc++.h>
using namespace std;
void fastscan(long int &number)
{
  register int c;
  c=getchar();
  number=0;
  for(;(c>47 && c<58);c=getchar())
    number=number*10+c-48;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 long int n,q;
fastscan(n);
fastscan(q); 
long int A[n+1]={0};
for( long int i=1;i<n+1;i++)
{
 fastscan(A[i]);
 if(i!=1)
  A[i]=A[i]+A[i-1];
}
while(q--)
{
  long int a,b;
 fastscan(a);
 fastscan(b);
  long int k=0; 
cout<<floor((A[b]-A[a-1])/((b-a)+1))<<"\n";
}
return 0;
}
