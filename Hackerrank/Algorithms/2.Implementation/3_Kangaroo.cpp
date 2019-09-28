#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1,v1;
	cin>>x1>>v1;
	int x2,v2;
	cin>>x2>>v2;

	int k1=1,k2=1;
	  if((x1-x2)>0 and (v2-v1)>0)
	  {
         k1=(x1-x2)%(v2-v1);
      }
       else if((x2-x1)>0 and (v1-v2)>0)
         k2=(x2-x1)%(v1-v2);
      else if( (x1-x2)<0 and (v2-v1)<0 ||(x2-x1)<0 and (v1-v2)<0)
       k1=(x1-x2)%(v2-v1);
         if(k1==0 || k2 ==0 )
         	cout<<"YES"<<endl;
         else
         	cout<<"NO"<<endl;
	return 0;
}