//Program to find out largest number among three numbers
//Using ternary operators

#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"Enter first number:-";
cin>>a;
cout<<endl;
cout<<"Enter second number :-";
cin>>b;
cout<<endl;
cout<<"Enter third number:- ";
cin>>c;
cout<<endl;
int z;
 z = a >  b ? (a > c ? a : c) : (b > c ? b : c);
cout<<"The largest of three numbers is :- "<<z<<endl;;
	return 0;
}