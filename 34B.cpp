// author : Anuj Maurya
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	vector<int> v(n);
	for(auto &i : v) {
		cin >> i;
	}
	sort(v.begin(), v.end());
	int sum = 0;
	int i = 0;
	while(m--) {
		if(v[i] < 0) {
			sum += v[i];
			i++;
		}else break;
	}
	cout << abs(sum);
}