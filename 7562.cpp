#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<math.h>
#include<cstring>
#define endl "\n"
#define ll long long
#define pii pair<int, int>
using namespace std;

int N;
bool visited[302][302];
int v[302][302];
int d[8][2] = { {-2,-1},{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2} };
int a, b, c, e;
int cnt = 0;
int B[302][302];

void dfs(int x, int y, int xx, int yy) {
	cnt++;
	visited[x][y] = true;
	if (x == xx and y == yy) return;
	for (int i = 0; i < 8; i++) {
		int nx = x + d[i][0];
		int ny = y + d[i][1];
		if (nx < 0 or ny < 0 or nx >= N or ny >= N) continue;
		if (visited[nx][ny]) continue;
		visited[nx][ny] = true;
		dfs(nx, ny,xx,yy);
	}
}

void bfs(int x, int y, int xx, int yy) {
	visited[x][y] = true;
	B[x][y] = 0;
	queue<pii> q;
	q.push({ x,y });
	while (!q.empty()) {
		int x = q.front().first, y = q.front().second; q.pop();
		if (x == c and y == e) return;
		for (int i = 0; i < 8; ++i) {
			int nx = x + d[i][0], ny = y + d[i][1];
			if (nx < 0 or ny < 0 or nx >= N or ny >= N) continue;
			if (visited[nx][ny]) continue;
			visited[nx][ny] = true;
			q.push({ nx,ny });
			B[nx][ny] = B[x][y] + 1;
		}
	}
}
	

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> N;
		cin >> a >> b >> c >> e;
		bfs(a, b, c, e);
		cout << B[c][e] << endl;
		cnt = 0;
		memset(visited, false, sizeof(visited));
		memset(v, 0, sizeof(v));
	}
}
