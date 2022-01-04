#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
#define endl "\n"

int main() {

	int N; cin >> N;
	string s; cin >> s;
	vector<pair<string, string>> v(N);
	int cnt = 0;
	int idx = 0;

	for (int i = 0; i < N; i++) {
		cin >> v[i].first >> v[i].second;
	}
	for (int i = 0; i < N; i++) {
		if (s == v[i].first) {
			idx = i;
		}
	}
	if (idx == 0) {
		cout << 0; return 0;
	}
	for (int i = 0; i < idx; i++) {
		if (v[idx].second == v[i].second) {
			cnt++;
		}
	}
	cout << cnt;
}
