#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <cstring>
#include <cstdlib>
#define MAX 50
using namespace std;

int n, m;
vector<int> adj[1001];
bool visited[1001];

void dfs(int u){
	visited[u] = true;
	for(int x=0; x<adj[u].size(); x++){
		if(!visited[adj[u][x]]){
			dfs(adj[u][x]);
		}
	}	
}

int demTPLT(int n){
	int ans=0;
	memset(visited, false, sizeof(visited));
	for(int i=1; i<=n; i++){
		if(!visited[i]){
			++ans;
			dfs(i);
		}
	}
	return ans;
}

int main(){
	ifstream ifs("input.txt");
	ifs >> n;
	for(int i=1; i<=n; i++){
		int j=1;
		for(int tmp; ifs >> tmp;){
			if(tmp==1){
				adj[i].push_back(j);
			}
			j++;
			if(j>n)
				break;
		}
	}
	
	cout << demTPLT(n);
	return 0;
}
