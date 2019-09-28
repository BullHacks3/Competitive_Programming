#include<bits/stdc++.h>
using namespace std;
#define v 4
int mid_distance(int dist[],bool set[])
{
	int min=INT_MAX,min_index;
    for(int i=0;i<v;i++)
    {
    	if(set[i]==false and dist[i]<=min)
    	{
    		min=dist[i];
    		min_index=i;
    	}
    }
    return min_index;
}
int printAnswer(int dist[],int n)
{
	cout<<"Vertex  Distance from source\n";
	for(int i=0;i<n;i++)
	{
		cout<<i<<"    "<<dist[i]<<endl;
	}
}
void dijkstra_algo(int graph[v][v],int source)
{
	int dist[v];
	bool set[v];
for(int i=0;i<v;i++)
  {
    dist[i]=INT_MAX; set[i]=false;
  }

dist[source]=0;



for(int i=0;i<v-1;i++)
{

	int k=mid_distance(dist,set);
    set[k]=true;

    for(int j=0;j<v;j++)
    {
    	if(!set[j] and graph[k][j] && dist[k]!=INT_MAX && dist[k]+graph[k][j]<dist[j])
    		dist[j]=dist[k]+graph[k][j];
    }
}
printAnswer(dist,v);
}



int main()
{
	int graph[v][v]={{0,1,0,3},{1,0,9,2},{3,2,4,0},{0,9,0,4}};
	dijkstra_algo(graph,0);
	return 0;
}