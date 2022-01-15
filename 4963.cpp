#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<math.h>
#include<cstring>

using namespace std;
#define endl "\n"
#define ll long long
#define pii pair<int, int>

bool visited[55][55];
int arr[55][55];
queue<pii> q;
int d[8][2] = { {1,-1},{1,0},{1,1},{0,1},{0,-1},{-1,-1},{-1,0}, {-1,1} };
int N, M;
void dfs(int x, int y) {
	visited[x][y] = true;
	for (int i = 0; i < 8; i++) {
		int nx = x + d[i][0];
		int ny = y + d[i][1];
		if (nx < 0 or ny < 0 or nx >= N or ny >= M) continue;
		if (visited[nx][ny] or !arr[nx][ny]) continue;
		visited[nx][ny] = true;
		dfs(nx, ny);
	}
}
void bfs(int x, int y) {
	visited[x][y] = true;
	q.push({ x,y });
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 8; i++) {
			int nx = x + d[i][0];
			int ny = y + d[i][1];
			if (nx < 0 or ny < 0 or nx >= N or ny >= M) continue;
			if (visited[nx][ny] or !arr[nx][ny]) continue;
			visited[nx][ny] = true;
			q.push({ nx,ny });
		}
	}
}

int main() {

	while (true) {
		int cnt = 0;
		cin >> N >> M;
		if (N == 0 and M == 0) return 0;
		swap(N, M);
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				cin >> arr[i][j];
			}
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (!visited[i][j] and arr[i][j]) {
					cnt++;
					bfs(i, j);
				}
			}
		}
		cout << cnt << endl;
		memset(arr, 0, sizeof(arr));
		memset(visited, false, sizeof(visited));
	}
}
