#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
int main()
{
ll t,one=0,two=0,k=0,w=0;
cin>>t;
while(t--)
{
one=0;
two=0;
k=0;
w=0;
string s;
cin>>s;
for(char c : s)
 {

   if(c=='1')
    one++;
   else
     two++;
   if(k==1)
     {
       if((one-two)==2)
            {
           cout<<"WIN"<<"\n";
           break;
           }
       else if((two-one)==2)
           { 
           cout<<"LOSE"<<"\n";
           break;
           }    
     }
       if(one>=11 and k!=1)
           {
          cout<<"WIN"<<"\n";
           break;
            }
          if(two>=11 and k!=1)
             { 
      cout<<"LOSE"<<"\n";
       break;
              } 
if(one==two and one==10 and w==0)
    {  
   k=1;
  one=0;
  two=0;
   w=1;
     }
 }

}
return 0;
}
