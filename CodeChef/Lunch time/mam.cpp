#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c)  for(i=a;i<b;i+=c)
#define MOD 1000000000
typedef long long ll;
int main()
{
ll A[50]={0};
ll k=0,t,i,m;
   cin>>t;
   while(t--)
{
m=0;i=0;
int ma=0;
         rep(i,0,50,1)
           {   
                cin>>A[i];
                  m++;  
                 if(k==0 and A[i]==0)
                 break;
               k=A[i];
                   if(A[i]>ma)
                           ma=A[i];
         m++;   
           }
rep(i,0,m,1)
cout<<A[i]<<endl;            
/*int fina=0;
int count=0;
rep(i,0,m,1)
   {
       if(fina==ma)
               count++;
              if(count>=2)
                        break;
            if (fina!=ma and fina<A[i])
                   fina=A[i];
    }           
if(count>=2)
cout<<count<<endl;
else
cout<<fina<<endl;
*/
}
return 0;
}
