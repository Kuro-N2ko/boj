#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<math.h>

using namespace std;
#define endl "\n"
#define ll long long
#define pii pair<int, int>

int main() {
	int L; cin >> L;
	int a, b;
	vector<int> v(L);
	if (L == 1) {
		cout << 0; return 0;
	}
	for (int i = 0; i < L; i++) {
		cin >> v[i];
	}
	int n; cin >> n;
	sort(v.begin(), v.end());
	for (int i = 0; i < L; i++) {
		if (v[i] == n) {
			cout << 0; return 0;
		}
	}
	if (n>v[L-1]) {
		cout << 0; return 0;
	}
	if (n < v[0]) {
		if (n == 1) {
			cout << v[0] - 1 - n; return 0;
		}
		else if (n == v[0] - 1) {
			cout << v[0] - 2; return 0;
		}
		else {
			a = n - 1;
			b = v[0] - n - 1;
			cout << a * b + a + b; return 0;
		}
	}
	for (int i = 0; i < L - 1; i++) {
		if (v[i] < n and n < v[i + 1]) {
			a = n - v[i] - 1;
			b = v[i + 1] - n - 1;
		}
	}
	cout << a * b + a + b;
}	
