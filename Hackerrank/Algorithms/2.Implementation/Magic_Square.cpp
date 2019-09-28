#include<bits/stdc++.h>
using namespace std;
void Magicsquare(int n)
{
	int matrix[n][n];

	//Initialise all matrix elements to zero
     memset(matrix,0,sizeof(matrix));

   //first  element position (n/2,n-1)
     int i=n/2;
     int j=n-1;


     for(int count=1;count<=n*n;)
     {
     	//Condition 3
     	if(i==-1 and j==n)
     	{
     		i=0;
     		j=n-2;
     	}
     	else
     	{
     		if(j==n)
     			j=0;
     		if(i<0)
     			i=n-1;
     	}
     		if(matrix[i][j])
     		{
     			i=i+1;
     			j=j-2;
     			continue;
     		}
     		else
     			matrix[i][j]=count++;
     	
     j++;i--;
     }
cout<<"The elements of matrix square are:- "<<endl;
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		cout<<matrix[i][j]<<" ";
	}
	cout<<endl;
}


}
int main()
{
	int n;
	cin>>n;
	Magicsquare(n);
	return 0;
}