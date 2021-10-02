#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}
	long long ans = 0;
	for(int i = 0; i < n-1; i++) {
		int t = 1;
		while(t+1+i <= n)
			t*=2;
		t/=2;
		ans += v[i];
		v[i+t] += v[i];
		cout << ans << '\n';
	}
	return 0;
}