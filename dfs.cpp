#include <iostream>
#include <vector>
#include <stack>


using namespace std;

const int N = 8; // vertices

vector<int> adj[N]; // lista de adjacência
vector<bool> visited;

void dfs(int u){ 
	visited[u] = true; // Marca o vértice u como visitado
	cout << u << " "; // Imprime o vértice u
	for(auto v: adj[u]){ // Para cada vértice v adjacente a u
		if(!visited[v]){ // Se v não foi visitado
			dfs(v); // Chama a função dfs recursivamente com o vértice v
		}
	}

}



//com pilha


void dfsstack(int u){

	stack<int> s; // Cria uma pilha
	s.push(u); // Adiciona o vértice u na pilha
	while(!s.empty()){
		int v = s.top(); // Pega o topo da pilha
		s.pop(); // Remove o topo da pilha

		cout << v << " "; // Imprime o vértice v

		visited[v] = true; // Marca o vértice v como visitado
		for (auto e: adj[v]){
			if(!visited[e]){ // Se e não foi visitado
				s.push(e); // Adiciona e na pilha
		}
	
	}
	
	}
}
int main(){
	
	visited.assign(N, false); //Preenche o vetor de visitados com false
	adj[0].push_back(1);
	adj[0].push_back(2);
	adj[1].push_back(3);
	adj[3].push_back(4);
	adj[4].push_back(6);
	adj[2].push_back(5);
	adj[5].push_back(7);
	
	//dfs(0); // Chama a função dfs com o vértice 0
	dfsstack(0); // Chama a função dfsstack com o vértice 0

	cout << "\n";



return 0;
}
