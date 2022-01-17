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

queue<pii> q;
bool visited[505][505];
int a[505][505];
int d[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
int N, M;
int area = 0;
int b = 0;

void bfs(int x, int y) {
	visited[x][y] = true;
	q.push({ x,y });
	while (!q.empty()) {
		b++;
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + d[i][0];
			int ny = y + d[i][1];
			if (nx < 0 or ny < 0 or nx >= N or ny >= M) continue;
			if (!a[nx][ny] or visited[nx][ny]) continue;
			visited[nx][ny] = true;
			q.push({ nx,ny });
		}
	}
	area = max(area, b);
	b = 0;
}

int main() {
	int cnt = 0;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (!visited[i][j] and a[i][j]) {
				cnt++;
				bfs(i, j);
			}
		}
	}
	if (cnt == 0) {
		cout << cnt << endl << 0; return 0;
	}
	cout << cnt << endl << area;
}
