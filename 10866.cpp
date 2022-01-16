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

int main() {
	cin.tie(0); cin.sync_with_stdio(0);
	int N; cin >> N;
	deque<int> d;
	string s;
	int a;
	for (int i = 0; i < N; i++) {
		cin >> s;
		if (s == "push_front") {
			cin >> a;
			d.push_front(a);
		}
		if (s == "push_back") {
			cin >> a;
			d.push_back(a);
		}
		if (s == "pop_front") {
			if (d.empty()) cout << "-1" << endl;
			else {
				cout << d.front() << endl;
				d.pop_front();
			}
		}
		if (s == "pop_back") {
			if (d.empty()) cout << "-1" << endl;
			else {
				cout << d.back() << endl;
				d.pop_back();
			}
		}
		if (s == "size") cout << d.size() << endl;
		if (s == "empty") {
			if (d.empty()) cout << 1 << endl;
			else cout << 0 << endl;
		}
		if (s == "front") {
			if (d.empty()) cout << -1 << endl;
			else cout << d.front() << endl;
		}
		if (s == "back") {
			if (d.empty()) cout << -1 << endl;
			else cout << d.back() << endl;
		}
	}
}
