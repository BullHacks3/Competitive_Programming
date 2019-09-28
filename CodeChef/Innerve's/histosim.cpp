#include<iostream>
using namespace std;
int main()
{
int t,i,m=0,kk=0;;
char a[1001],b[1001];
cin>>t;
char k;
int al[1001],all[1001],ll=0,l=0;
while(t--)
{
m=0;
l=0;
ll=0;
cin>>a;
cin>>b;
k=a[0];
for(i=0;a[i]!='\0';i++)
 {
  if(k==a[i])
    {
m++;
    }
  else
   {
   al[l]=m;
   l++;
   m=1;
    }

   k=a[i];
 }
al[l]=m;
k=b[0];
m=0;
ll=0;
kk=0;
for(i=0;b[i]!='\0';i++)
 {
  if(k==b[i])
    {
    m++;
    }
  else
   {
   all[l]=m;
   ll++;
   m=1;
    }

   k=b[i];
 }
all[ll]=m;
for(i=0;i<=ll;i++)
{
    if(al[i]==all[i])
      kk=1;
     else
      kk=0;
}
if(kk==1)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
return 0;
}
