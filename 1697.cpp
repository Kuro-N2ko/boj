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

bool visited[100005];
queue<pii> q;

void bfs(int N, int K) {
	visited[N] = true;
	q.push({ N,0 });
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		if (x == K) {
			cout << y; break;
		}
		if (x + 1 <= 100000 and !visited[x + 1]) {
			q.push({ x + 1,y + 1 });
			visited[x + 1] = true;
		}
		if (x - 1 >= 0 and !visited[x - 1]) {
			q.push({ x - 1, y + 1 });
			visited[x - 1] = true;
		}
		if (x * 2 <= 100000 and !visited[x * 2]) {
			q.push({ x * 2, y + 1 });
			visited[x * 2] = true;
		}
	}
}

int main() {
	fast;
	int N, K;
	cin >> N >> K;
	bfs(N, K);
}
