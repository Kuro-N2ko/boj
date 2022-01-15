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
int cn = 0;
vector<int> s;
bool visited[30][30];
vector<string> v;
queue<pii> q;
int d[4][2] = { {1,0},{-1,0},{0,-1},{0,1} };

void bfs(int x, int y) {
	visited[x][y] = true;
	q.push({ x,y });
	while (!q.empty()) {
		cn++;
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + d[i][0];
			int ny = y + d[i][1];
			if (nx < 0 or ny < 0 or nx >= N or ny >= N) continue;
			if (visited[nx][ny] or v[nx][ny]=='0') continue;
			visited[nx][ny] = true;
			q.push({ nx,ny });
		}
	}
	s.push_back(cn);
	cn = 0;
}

int main() {
	cin >> N;
	v.resize(N);
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visited[i][j] and v[i][j]=='1') {
				cnt++;
				bfs(i, j);
			}
		}
	}
	cout << cnt << endl;
	sort(s.begin(), s.end());
	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << endl;
	}
}
