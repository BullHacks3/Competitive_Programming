#include<iostream>
using namespace std;
int main()
{
char s[27];
cin>>s;
int t,i,j,k=0,z;
cin>>t;
char abc[13];
while(t--)
{ 
k=0; 
cin>>abc;
z=0;
for(i=0;abc[i]!='\0';i++)
  {
    for(j=0;s[j]!='\0';j++)
        {
         if(abc[i]==s[j])
           {
             k++;
            break;
           }
       }
if(k==0)
{
z=99;
cout<<"No"<<endl;
break;
}
z=i;   
}
if(k==(z+1))
{
cout<<"Yes"<<endl;
}
else if(z!=99 and k!=(z+1))
cout<<"No"<<endl;
}

return 0;
}

