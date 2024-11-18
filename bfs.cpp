#include <iostream>
#include <vector>
#include <queue> // Biblioteca para usar fila
using namespace std;

const int N = 8; // vertices 

vector<int> adj[N]; // Lista de adjacencia
//vector<bool> visited;

vector<bool> distancia;

const int INF = 1e9;


void bfs(int u){
	distancia.assign(N, INF);
	queue<int> q;
	q.push(u);
	distancia[u] = 0;
	while(!q.empty()){
		int v = q.front();
		q.pop();
	//	visited[v] = true;
		cout << v << " ";
		for(auto e: adj[v]){
		//	if(!visited[e]){
			if(distancia[e] == INF){
				distancia[e] = distancia[v] + 1;
				q.push(e);
			}
		}
	}
}

int main(){
	//visited.assign(N, false);
	adj[0].push_back(1);
	adj[0].push_back(2);
	adj[1].push_back(3);
	adj[3].push_back(4);
	adj[4].push_back(6);
	adj[2].push_back(5);
	adj[5].push_back(7);
	bfs(0);
	cout << "\n";
	
	return 0;

}
