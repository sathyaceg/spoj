#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <climits>
#include <map>
#include <vector>
#include <climits>
#include <queue>

using namespace std;

int p, q;
long int dist[1000001];
long int dist1[1000001];
vector <pair <pair <int, int>, long int> > mp;
vector <pair <pair <int, int>, long int> > mpt;

struct s1
{
	int v, w;
	s1(int v1, int w1)
	 : v(v1), w(w1) {}	 
 	bool operator < (const s1 &s) const {
        return w > s.w;
    }

};
vector <s1> *vex;
vector <s1> *vt;
void djikstra1()
{
	for(int i = 0; i < 1000001; ++i)
	 dist[i] = INT_MAX;
	priority_queue <s1> q;
	q.push(s1(1, 0));
	dist[1] = 0;
	while(!q.empty())
	{
		s1 u = q.top();
		q.pop();		
		for(int i = 0; i < vex[u.v].size(); ++i)
		{			
			s1 e = vex[u.v][i];
			if(dist[u.v] + e.w < dist[e.v])
			{				
				dist[e.v] = dist[u.v] + e.w;
				q.push(e);
			}
		}
	}
}

void djikstra2()
{
	for(int i = 0; i < 1000001; ++i)
	 dist1[i] = INT_MAX;
	priority_queue <s1> q;
	q.push(s1(1,0));
	dist1[1] = 0;
	while(!q.empty())
	{
		s1 u = q.top();
		q.pop();		
		for(int i = 0; i < vt[u.v].size(); ++i)
		{			
			s1 e = vt[u.v][i];
			if(dist1[u.v] + e.w < dist1[e.v])
			{
				dist1[e.v] = dist1[u.v] + e.w;
				q.push(e);
			}
		}
	}
}

int main()
{
	int cases;
	scanf("%d", &cases);
	vex = new vector< s1 >[ 1000001 ]; 
    vt = new vector< s1 >[ 1000001];	
	while(cases--)
	{
		for(int i = 0; i < 1000001; ++i)
			vex[i].clear(), vt[i].clear();
		mp.clear();mpt.clear();
		scanf("%d %d", &p, &q);
		int u, v;
		long w;
		for(int i = 0; i < q; ++i)
		{
			scanf("%d %d %ld", &u, &v, &w);
			vex[u].push_back(s1(v, w));
			vt[v].push_back(s1(u, w));	
		}
		djikstra1();
		djikstra2();
		long int a = 0;
		for(int i = 1; i <= p; ++i)
			a = a + dist[i] + dist1[i];
		printf("%ld\n", a);
	}			
}
