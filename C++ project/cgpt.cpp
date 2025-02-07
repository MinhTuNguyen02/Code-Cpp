#include <iostream>
#include <vector>
#include <cstring>
#include <utility>
using namespace std;

vector<int> ke[1001];
bool ok[1001];
int truoc[1001];
int a,b;
vector< pair<int,int> > ans; 

void reset(){
	for(int i=0;i<1001;i++){
		ke[i].clear();
		memset(ok,false,sizeof(ok));
	}
}

void dfs(int u){
	ok[u]=true;
	for(int i=0;i<ke[u].size();i++){
		if(!ok[ke[u][i]]){
			truoc[ke[u][i]]=u;
			dfs(ke[u][i]);
		}
	}
}

int tplt(){
	int res=0;
	for(int i=1;i<=a;i++){
		if(!ok[i]){
			res++;
			dfs(i);
		}
	}
	return res;
}

void canhcau(int canh, int res, vector< pair<int,int> > tmp){
	for(int i=0;i<b; i++){
		if(i!=canh){
			ke[tmp[i].first].push_back(tmp[i].second);
			ke[tmp[i].second].push_back(tmp[i].first);
		}
	}
	
	int dem=tplt();
	if(dem>res){
		if(tmp[canh].first < tmp[canh].second)
			ans.push_back({tmp[canh].first, tmp[canh].second});
		else ans.push_back({tmp[canh].second, tmp[canh].first});
	}
}

int main(){
	reset();
	ans.clear();
	cin >> a >> b;
	vector< pair<int,int> > tmp;
	for(int i=0;i<b;i++){
		int u,v;
		cin >> u >> v;
		tmp.push_back({u,v});
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	
	int res=tplt();
	for(int canh=0; canh<b;canh++){
		reset();
		canhcau(canh,res,tmp);
	}
	
	cout << ans.size();
	return 0;
}
