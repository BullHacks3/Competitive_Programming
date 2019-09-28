#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
	int t;
	cin >> t;
 
	while(t--)
	{
		int n, m,w,k;
		cin >> n >> m;
 
		int arr[n];
 
		for(int i=0 ; i<n ; i++)
			cin >> arr[i];
 
		bool good = false;
                 for(int i=0 ; i < (1<<n) ; i++)
		{
			int s = 0;
			for(int j=0 ; j<n ; j++)
				if(i & (1<<j))
					{
                                      s += arr[j];
                                        cout<<"The value of i is:- "<<i<<endl;
                                        cout<<"The value of j is:- "<<j<<endl;
                                        w=1<<j;
                                        cout<<"The value of w is:- "<<w<<endl;
                                        cout<<"The value of array is;- " <<arr[j]<<endl;
                                        
                                         
                                        
 }
			if(s == m)
			{
				good = true;
				break;
			}
		}
                 /*
		if(good) cout << "Yes" << endl;
		else cout << "No" << endl;*/
	
 }
	return 0;
}
