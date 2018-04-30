/* Name :- Bakul Gupta  */
#include<bits/stdc++.h>
using namespace std;
class Bfs
{
private:
	int V; //Denotes the number of vertices
 list<int> *adj;  //Pointer to a list of integers
public:
	Bfs(int V);
	void edge_insertion(int u,int v);
	void traverse(int start);
};
Bfs :: Bfs(int V)
{
  this->V=V;
  adj=new list<int>[V]; 
}

void Bfs :: edge_insertion(int u,int v)
{
    adj[u].push_back(v);
}

void Bfs :: traverse(int start)
 {
   bool *r=new bool[V];
   for(int i=0;i<V;i++)
   {
       r[i]=false;
   }

    r[start]=true;
    list<int> queue;
    queue.push_back(start);
    
    list<int>:: iterator it;
    while(!queue.empty())
    {
    	start=queue.front();
    	cout<<start<<" ";
    	queue.pop_front();
      for(it=adj[start].begin();it!=adj[start].end();it++)
      	  {
                      if(!r[*it])
                      {
                          queue.push_back(*it);
                          r[*it]=true;
                      }


      	  }
    }
}


int main()
{
Bfs b(6);
b.edge_insertion(0,1);
b.edge_insertion(0,5);
b.edge_insertion(1,2);
b.edge_insertion(2,2);
b.edge_insertion(5,4);
b.edge_insertion(4,3);
b.traverse(0);
}