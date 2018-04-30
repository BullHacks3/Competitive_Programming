#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	char k;
	int step=0,final=0;
	 for(int i=0;i<n;i++)
	 {
	 	cin>>k;
         if(k=='U')
         	step+=1;
         else
         	step+=-1;
         if(step==0 and k!='D')
         	final++;
	 }
	 cout<<final<<endl;
	return 0;
}