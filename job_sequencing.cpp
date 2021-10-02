#include<bits/stdc++.h>
using namespace std;
// Method 1 :: sort all the jobs in decreasing order of their profits
// we can also do the job which have greater profit, before their deadline
int main() {
	int n; // number of jobs to be done
	cin >> n;
	vector<tuple<int, int, char>> v;
	int profit, deadline;
	char job;
	for(int i = 0; i < n; i++) {
		cin >> profit >> deadline >> job;
		v.push_back({profit, deadline, job});
	}
	sort(v.rbegin(), v.rend());
	vector<bool> marked(10000, false);
	vector<char> ans;
	for(int i = 0; i < n; i++) {
		for(int j = get<1>(v[i]); j > 0; j--) {
			if(marked[j] == false) {
				ans.push_back(get<2>(v[i]));
				marked[j] = true;
				break;
			}
		}
	}
	for(int i = 0; i < (int)ans.size(); i++) {
		cout << ans[i] << " ";
	}
}