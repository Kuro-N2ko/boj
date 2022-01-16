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
	string s;
	int a;
	for (int i = 0; i < N; i++) {
		cin >> s;
		if (s == "push") {
			cin >> a;
			q.push(a);
		}
		else if (s == "pop") {
			if (q.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (s == "size") {
			cout << q.size() << endl;
		}
		else if (s == "empty") {
			if (q.empty()) {
				cout << 1 << endl;
			}
			else cout << 0 << endl;
		}
		else if (s == "front") {
			if (q.empty()) {
				cout << -1 << endl;
			}
			else cout << q.front() << endl;
		}
		else if (s == "back") {
			if (q.empty()) {
				cout << -1 << endl;
			}
			else cout << q.back() << endl;
		}
	}
}
