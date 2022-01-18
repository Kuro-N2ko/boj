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
bool visited[101][101];
vector<string> v;
int d[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
int N, M;
int dd[101][101];

void bfs(int x, int y) {
	dd[x][y] = 1;
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
			if (v[nx][ny]=='0' or visited[nx][ny]) continue;
			visited[nx][ny] = true;
			q.push({ nx,ny });
			dd[nx][ny] = dd[x][y] + 1;
		}
	}
}

int main() {
	int cnt = 0;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string s; cin >> s;
		v.push_back(s);
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (!visited[i][j] and v[i][j]=='1') {
				bfs(0, 0);
			}
		}
	}
	cout << dd[N-1][M-1];
}
