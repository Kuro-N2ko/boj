#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<math.h>
#include<cstring>
#include<deque>
#define endl "\n"
#define ll long long
#define pii pair<int, int>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> a[101];
	vector<int> v(N);
	int cnt = 0;
	int mm = 0;
	int b;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> b;
			a[i].push_back(b);
		}
	}

	for (int i = 0; i < N; i++) {
		sort(a[i].begin(), a[i].end(), greater<int>());
	}
	for (int i = 0; i < M; ++i) {
		for (int j = 0; j < N; j++) {
			mm = max(mm, a[j][i]);
		}
		//cout << mm << "\n";
		for (int j = 0; j < N; ++j) {
			if (a[j][i] == mm) v[j]++;
		}
		mm = 0;
	}
	int nn = 0;
	for (int i = 0; i < N; i++) {
		nn = max(nn, v[i]);
	}
	for (int i = 0; i < N; i++) {
		if (v[i] == nn) {
			cout << i + 1 << " ";
		}
	}
}
