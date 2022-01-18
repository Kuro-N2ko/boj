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

bool visited[101][101];
int arr[101][101];
int d[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
int M, N;
vector<int> area;
int mm = 0, cnt = 0;

void dfs(int x, int y) {
	visited[x][y] = true;
	cnt++;
	for (int i = 0; i < 4; i++) {
		int nx = x + d[i][0];
		int ny = y + d[i][1];
		if (nx < 0 or ny < 0 or nx >= M or ny >= N) continue;
		if (visited[nx][ny] or arr[nx][ny]) continue;
		dfs(nx, ny);
	}
}

int main() {
	int K;
	cin >> M >> N >> K;
	while (K--) {
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = y1; i < y2; i++) {
			for (int j = x1; j < x2; j++) {
				arr[i][j]++;
			}
		}
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (!visited[i][j] and !arr[i][j]) {
				dfs(i, j);
				area.push_back(cnt);
				cnt = 0;
			}
		}
	}
	sort(area.begin(), area.end());
	cout << area.size() << endl;
	for (int i = 0; i < area.size(); i++) {
		cout << area[i] << " ";
	}
}
