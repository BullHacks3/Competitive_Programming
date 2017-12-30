#include<bits/stdc++.h>
using namespace std;
#define front(i,a,b,c) for(i=a;i<=b;i+=c)
#define back(i,a,b,c) for(i=a;i>=b;i-=c)
typedef long long ll;
typedef pair<int,int>ii;
const ll nax =1000000 +10;
ll n,right_low[nax],j;
ll DP[nax],A[nax],DP1[nax];
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
front(j,1,n,1)
 cin>>A[j];

stack <ll> st;
right_low[n]=n+1;
st.push(n);
cout<<"The value of top of stack is:- "<<st.top()<<endl;
  back(j,n-1,1,-1)
     {
         while(!st.empty() && A[st.top()]>=A[j])
           st.pop();
    if(st.empty())
         { 
         right_low[j]=n+1;
           cout<<right_low[j]<<"\t";
         }    
else
         {
        right_low[j]=st.top();
         cout<<right_low[j]<<"\t";
         }         
st.push(j);
}
return 0;
}
