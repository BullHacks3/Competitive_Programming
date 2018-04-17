#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<b;i+=c)


void solve(int n, vector<int> s, int d, int m){
    // Complete this function
    int i,j;
    int sum=0;
    int k=0,w=0;
    int max=-99;
    rep(i,0,n,1)
    {
    	sum=0;
        for(j=i;j<(m+i) and j<n;j++)
        {
           sum+=s[j];
        }
        if(d==sum)
        {
          k++;
          max=k;
          w=1;
        }
        else if(d!=sum and w==1)
        	{
        		if(max<k)
        		{
        		  max=k;
        		  k=0;
        		  w=0;
        		}

        	}


    }
    if(max<0)
    	max=0;
    cout<<max<<endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    solve(n, s, d, m);
    return 0;
}
