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

bool visited[505][505];
int arr[505][505];
int d[8][2] = { {-2,-1},{-2,1},{-1,-2},{-1,2},{1,-2},{1,2},{2,-1},{2,1} };
int N;
int B[505][505];

void bfs(int x, int y) {
	visited[x][y] = true;
	B[x][y] = 0;
	queue<pii> q;
	q.push({ x,y });
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 8; i++) {
			int nx = x + d[i][0];
			int ny = y + d[i][1];
			if (nx < 0 or ny < 0 or nx >= N or ny >= N) continue;
			if (visited[nx][ny]) continue;
			visited[nx][ny] = true;
			q.push({ nx,ny });
			B[nx][ny] = B[x][y] + 1;
		}
	}
}

int main() {
	int M; cin >> N >> M;
	int X, Y; cin >> X >> Y;
	bfs(X - 1, Y - 1);
	for (int i = 0; i < M; i++) {
		int a, b; cin >> a >> b;
		cout << B[a - 1][b - 1] << " ";
	}
}
