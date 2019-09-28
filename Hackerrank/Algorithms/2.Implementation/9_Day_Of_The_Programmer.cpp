#include<bits/stdc++.h>
using namespace std;
int julian_leap(int y)
{
	if(y%4==0)
		return 1;
	else
		return 0;
}
int gregorian_leap(int y)
{
	if(y%400==0)
		return 1;
	else
		if(y%4==0 and y%100!=0)
			return 1;
		else
			return 0;
}
int main()
{
	int year;
	cin>>year;
	int yy;
	int dd=13;
	string mm="09";
	int j_leap=julian_leap(year);
    int g_leap=gregorian_leap(year);
    if(year>=1919)
    {
         yy=year;
         dd=dd-g_leap;
         cout<<dd<<"."<<mm<<"."<<yy<<endl;
    }
    if(year<=1917)
    {
    	yy=year;
    	dd=dd-j_leap;
    	cout<<dd<<"."<<mm<<"."<<yy<<endl;
    }
    if(year==1918)
    {
    	cout<<"26"<<"."<<"09"<<"."<<year<<endl;
    }
	return 0;
}