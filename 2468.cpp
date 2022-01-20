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

bool visited[101][101];
queue<pii> q;
int arr[101][101];
int d[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
int N;

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
			if (nx < 0 or ny < 0 or nx >= N or ny >= N) continue;
			if (visited[nx][ny] or arr[nx][ny] <= 0) continue;
			visited[nx][ny] = true;
			q.push({ nx,ny });
		}
	}
}

int main() {
	cin >> N;
	int mm = 0;
	int ans = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
			mm = max(mm, arr[i][j]);
		}
	}
	if (mm == 1){
		cout << 1; return 0;
	}
	for (int s = 0; s < mm; s++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				arr[i][j] -= 1;
			}
		}
		int cnt = 0;
		
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (arr[i][j] > 0 and !visited[i][j]) {
					cnt++;
					bfs(i, j);
				}
			}
		}
		ans = max(cnt, ans);
		memset(visited, false, sizeof(visited));
	}
	cout << ans;
}
