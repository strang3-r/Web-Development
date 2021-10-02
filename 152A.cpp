#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	int arr[n][m];
	for(int i = 0; i < n; i++) {
		string s; 
		cin >> s;
		for(int j = 0; j < m; j++) {
			arr[i][j] = s[j];
		}
	}
	set<int> s;
	for(int j = 0; j < m; j++) {
		int curr = 0;
		for(int i = 0; i < n; i++) {
			if(arr[i][j] > curr)
				curr = arr[i][j];
		}
		for(int i = 0; i < n; i++) {
			if(arr[i][j] == curr)
				s.insert(i);
		}
	}
	cout << (int)s.size();
	return 0;
}