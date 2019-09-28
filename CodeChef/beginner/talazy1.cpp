    #include<iostream>
    using namespace std;
    int main()
    {int i;
    long long int d,n,b,m,l,a,c;
    cin>>i;
    while(i--)
    {cin>>n>>b>>m;
    c=0;
    l=0;
    while(n>0)
    {if(n%2==0)
    {a=n/2;
    c=c+(m*a);
    n=a;
    m=m*2;
    l=l+1;
    }
    else
    {a=(n+1)/2;
    c=c+(m*a);
    n=n-a;
    m=m*2;
    l=l+1;
    }
    }
    d=c+((l-1)*b);
    cout<<d<<"\n";
    }
    return 0;
    }
     
