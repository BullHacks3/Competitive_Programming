#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
  int t;
cin>>t;
while(t--)
{
    int k;
    cin>>k;
    // Process to determine the seat
   int temp=k%12;
    if(temp==0)
     {
      cout<<(k-11)<<" "<<"WS"<<endl;
     }
    else if(temp==1)
       cout<<(k+11)<<" "<<"WS"<<endl;
    else if(temp==2)
       cout<<(k+9)<<" "<<"MS"<<endl;
    else if(temp==3)
               cout<<(k+7)<<" "<<"AS"<<endl;
    else if(temp==4)
                   cout<<(k+5)<<" "<<"AS"<<endl;
    else if(temp==5)
                       cout<<(k+3)<<" "<<"MS"<<endl;
    else if(temp==6)
                      cout<<(k+1)<<" "<<"WS"<<endl;
    else if(temp==7)
               cout<<(k-1)<<" "<<"WS"<<endl;
    else if(temp==8)
                      cout<<(k-3)<<" "<<"MS"<<endl;
    else if(temp==9)
                    cout<<(k-5)<<" "<<"AS"<<endl;
    else if(temp==10)
                cout<<(k-7)<<" "<<"AS"<<endl;
    else if(temp==11)
              cout<<(k-9)<<" "<<"MS"<<endl;






}
return 0;
}
