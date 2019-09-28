#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 int t;
 cin>>t;
 while(t--)
 {
  string a,b;
  cin>>a;
  cin>>b;
int total=a.length()+b.length();
  int A[26]={0};
  int B[26]={0};
for(int i=0;i<a.length();i++)
   A[a[i]-97]++;
for(int i=0;i<b.length();i++)
   B[b[i]-97]++;
int k=0;
for(int i=0;i<26;i++)
 {
   k=k+min(A[i],B[i]);
 }

cout<<(total-2*k)<<endl;
}
return 0;
}
