#include<iostream>
using namespace std;
int main()
{
	string s;
	cout<<"Enter the string u want to convert:-";
	getline(cin,s);

cout<<"Before conversion string is:- "<<s<<endl;
	int l=s.length();

	for(int i=0;i<l;i++)
	{
        if(s[i]>=65 and s[i]<=90)
        {
        	s[i]=s[i]+32;
        }
        else if(s[i]>=97 and s[i]<=132)
        {
        	s[i]=s[i]-32;
        }
   }
  cout<<"After conversion the string is:- "<<s<<endl;
}