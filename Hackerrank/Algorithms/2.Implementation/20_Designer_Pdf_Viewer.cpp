#include<bits/stdc++.h>
using namespace std;
void viewer(vector<int> w1,string w)
{
int width=w.length();
int max=INT_MIN;
for(int i=0;i<width;i++)
{
	//int m=w[i]-97;
	//cout<<"m is:-"<<m<<endl;
	int k=w1[w[i]-97];
     //cout<<w1[i]<<endl;
	if(max<k)
		max=k;
}

cout<<max*width<<endl;



}
int main()
{
	vector<int> k(26);
	for(int i=0;i<26;i++)
	{
		cin>>k[i];
	}
	string name;
	cin>>name;
    viewer(k,name);
}