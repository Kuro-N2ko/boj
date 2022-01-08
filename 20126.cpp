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

ll N, M, S;
vector<pair<ll, ll>> v;

int main() {

	cin >> N >> M >> S;
	v.resize(N);

	for (int i = 0; i < N; i++) {
		cin >> v[i].first >> v[i].second;
	}
	sort(v.begin(), v.end());
	if (v[0].first >= M) {
		cout << 0; return 0;
	}
	for (int i = 0; i < N - 1; i++) {
		if (v[i].first + v[i].second + M <= v[i + 1].first) {
			cout << v[i].first + v[i].second; return 0;
		}
	}
	if (v[N-1].first+v[N-1].second+M<=S) {
		cout << v[N - 1].first + v[N - 1].second; return 0;
	}
	cout << -1;
}
