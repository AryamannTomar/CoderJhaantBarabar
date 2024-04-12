#include<bits/stdc++.h>
using namespace std;
/*
PSEUDO CODES =>

dfs(u):
    if (u is Leaf) return;
    for node v in adj_list[u]:
        if v is not the parent of u:
            dfs(v)

bfs(root):
    Queue q;
    q.add(root)
    visited[root]=T, visited[]
    while(!q.empty()) 
        u=q.pop()
    for v in adj_list[u]:
        if (!visited[v])
            visited[v]=T
            q.add(v)
*/
const int N=(int)(1e5+5);
vector<int> tree[N]; 
void dfs(int s,int p){
	cout<<s<<" ";
	for(int v:tree[s]){
		if(v != p){
			dfs(v,s);
		}
	}
}

void bfs(int root){
	queue<int> q;
	q.push(root);
	vector<bool> visited(N, false);
	visited[root]=true;
	cout<<"Running BFS---\n";
	while(!q.empty()){
		int u=q.front();
		cout<<u<<" ";
		q.pop();
		for(int v: tree[u]){
			if(!visited[v]){
				visited[v] = true;
				q.push(v);
			}
		}
	}
	cout<<endl;
}

/*
8 
1 2 
1 3 
1 4 
2 5
2 6 
3 7
4 8
*/

int main(){
	int n;
	cin>>n;
	for(int i=0; i<n-1; i++){
		int u, v;
		cin>>u>>v;
		tree[u].push_back(v);
		tree[v].push_back(u);
	}
	cout<<"Running DFS---\n";
	dfs(1, 0);
	cout<<endl;
	bfs(1);
	return 0;
}