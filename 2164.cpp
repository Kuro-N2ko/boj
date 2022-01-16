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

int main() {
	cin.tie(0); cin.sync_with_stdio(0);
	int N; cin >> N;
	queue<int> q;
	for (int i = 0; i < N; i++) {
		q.push(i + 1);
	}
	while (q.size() != 1) {
		q.pop();
		q.push(q.front());
		q.pop();
	}
	cout << q.front();
}
