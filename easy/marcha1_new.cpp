#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<b;i+=c)

//Global-variable declaration
int n,m,k;
bool ii;
int A[21];

void func(int w,int mo)
{
//cout<<"The value of mo is:- "<<mo<<endl;

  if(m==mo)
   {
   ii=true;
  }
if(w>=n || mo>m)
    return;
  func(w+1,mo);
 
 func(w+1,(mo+A[w]));  

}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t,j;
cin>>t;
while(t--)
{
ii=false;
cin>>n>>m;
rep(j,0,n,1)
cin>>A[j];
func(0,0);
if(ii)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
return 0;
}
