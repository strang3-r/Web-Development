// author : Anuj Maurya
#include <bits/stdc++.h>
using namespace std;
void split(int n, int d) {
	if(n == 0 or d == 0)
		return;
	if(n % d == 0) {
		cout << n/d ;
		return;
	}
	if(d % n == 0) {
		cout << "1/" << d/n;
		return;
	}
	if(n > d) {
		cout << n/d << " + ";
		split(n%d, d);
		return;
	}
	int curr = ceil((float)d/n);
	cout << "1/" << curr << " + ";
	split(n*curr-d, d*curr);
}
int main() {
	int numerator, denominator;
	cin >> numerator >> denominator;
	printf("The splitted egyptian fraction is : \n");
	split(numerator, denominator);
}