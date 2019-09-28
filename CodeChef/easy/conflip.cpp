#include<iostream>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<b;i++)

int main()
{
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
int g;
cin>>g;
   while(g--)
{
int i,n,a,q,count=0,k;
cin>>i>>n;
cin>>a;
int A[n]={i};
rep(q,0,n,1)
 {
      rep(k,0,n-1,1)
          {
            A[k+1]=A[k];
           } 
    
     if(i==1)
       if(q%2==0)
         A[q]=2;
        else
         A[q]=1;
     else
        if(q%2==0)
            A[q]=1;
         else
            A[q]=2;
 if(A[q]==a)
      {
       count++;
       }

}
cout<<count<<endl;
}   
}
return 0;
}

