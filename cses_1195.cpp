#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int inf = 1e17+5;
const int N = 1e5+3;
vector<pair<int,int>> adj[N];
vector<int> cost(N, 0);

void dijkstra() {
	cost[1] = 0;
	set<pair<int,int>> s;
	s.insert({0, 1}); // price, to
	while(!s.empty()) {
		auto curr = *(s.begin());
		s.erase(curr);
		int price = curr.first;
		int from = curr.second;
		for(auto i : adj[from]) {
			int to = i.first;
			int 
		}
	}
}

int32_t main() {
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < m; i++) {
		int a, b, w;
		cin >> a >> b >> w;
		adj[a].push_back({b, w}); // to, price
	}
	dijkstra();



	return 0;
}