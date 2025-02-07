#include <iostream>
#include <vector>
#include <cstring>
#include <fstream>
#include <utility>

using namespace std;

int n,m;
vector<int> adj[1001];
bool visited[1001];
vector< pair<int,int> > dscanh;

void dfs(int u){
	visited[u] = true;
	for(int x=0; x<adj[u].size(); x++){
		if(!visited[adj[u][x]]){
			dfs(adj[u][x]);
		}
	}	
}

void dfs2(int u, int s, int t){
	visited[u] = true;
	for(int x=0; x<adj[u].size(); x++){
		if((u==s && adj[u][x]==t) || (u==t && adj[u][x]==s)) continue;
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

int canhcau(){
	int ans=0;
	int tplt = demTPLT(n);
	for(int it=0; it<dscanh.size(); it++){
		int x=dscanh[it].first, y=dscanh[it].second;
		memset(visited, false, sizeof(visited));
		int dem=0;
		for(int j=1; j<=n; j++){
			if(!visited[j]){
				++dem;
				dfs2(j,x,y);
			}
		}
		if(dem>tplt) ans++;
	}
	return ans;
}

int main(){
	ifstream ifs("input.txt");
	int* inp = new int[1001];
	int count=0, i=0;
	
	for(int tmp; ifs>>tmp;){
		inp[i]=tmp;
		count++;
		i++;
	}
	if(count==inp[1]*2){
		n=inp[0];
		m=inp[1];
		for(int t=2; t<count; t+=2){
			adj[t].push_back(t+1);
			adj[t+1].push_back(t);
			dscanh.push_back({t,t+1});
		}
		cout << canhcau();	
	}
//	else if(count==inp[0]*inp[0]+1){
//	}
//	else{
//	}
	delete [] inp;
	return 0;
}
