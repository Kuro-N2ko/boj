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
#define fast cin.tie(0); cin.sync_with_stdio(0)
using namespace std;

int main() {
	fast;
	int N, M;
	cin >> N >> M;
	vector<int> v(N+1);
	vector<int> psum(N+1);
	for (int i = 1; i <=N; i++) {
		cin >> v[i];
		psum[i] = v[i] + psum[i - 1];
	}
	while (M--) {
		int a, b;
		cin >> a >> b;
		cout << psum[b] - psum[a - 1] << endl;
	}
}
