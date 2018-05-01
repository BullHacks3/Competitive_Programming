#include<bits/stdc++.h>
using namespace std;
class Dfs
{
private:
	int V;
	list<int> *adj;
public:
    Dfs(int V);
    void edge_insertion(int u,int v);
    void traverse(int source);
    void dfs_traverse(int source,bool []);
};

Dfs :: Dfs(int V)
{
	this->V=V;
	adj=new list<int>[V];
}

void Dfs :: edge_insertion(int u,int v)
{
	adj[u].push_back(v);
}

void Dfs :: traverse(int source)
{
	bool *r=new bool[5];
	for(int i=0;i<V;i++)
	{
		r[i]=false;
	}
r[source]=true;
dfs_traverse(source,r);
}

void Dfs :: dfs_traverse(int source,bool r[])
{
	list<int>:: iterator it;
     cout<<source<<endl;
	for(it=adj[source].begin();it!=adj[source].end();it++)
		  {
		  	if(!r[*it])
		  	{
		  		r[*it]=true;
		  		//cout<<*it<<endl;
		  		dfs_traverse(*it,r);
		  	}
		  }
}
int main()
{
	Dfs d(5);
	d.edge_insertion(0,1);
	d.edge_insertion(1,3);
	d.edge_insertion(3,4);
	d.edge_insertion(0,2);
	d.edge_insertion(2,4);
	d.traverse(0);

}