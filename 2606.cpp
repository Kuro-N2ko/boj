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

bool visited[101];
queue<int> q;
vector<int> v[101];

void bfs(int x) {
	visited[x] = true;
	q.push(x);
	while (!q.empty()) {
		x = q.front();
		q.pop();
		for (int i = 0; i < v[x].size(); i++) {
			int nx = v[x][i];
			if (visited[nx]) continue;
			visited[nx] = true;
			q.push(nx);
		}
	}
}
void dfs(int x) {
	visited[x] = true;
	for (int i = 0; i < v[x].size(); i++) {
		int nx = v[x][i];
		if (visited[nx]) continue;
		visited[nx] = true;
		dfs(nx);
	}
}

int main() {
	int N, T; cin >> N >> T;
	int cnt = 0;
	while (T--) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	dfs(1);
	for (int i = 2; i <= N; i++) {
		if (visited[i]) {
			cnt++;
		}
	}
	cout << cnt;
}
