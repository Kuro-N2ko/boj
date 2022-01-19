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
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using namespace std;

bool visited[55][55];
queue<pii> q;
int arr[55][55];
int d[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
int N, M;

void bfs(int x, int y) {
	visited[x][y] = true;
	q.push({ x,y });
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
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
	int T, K;
	cin >> T;
	while (T--) {
		cin >> M >> N >> K;
		int cnt = 0;
		for (int i = 0; i < K; i++) {
			int a, b;
			cin >> a >> b;
			arr[b][a] = 1;
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
