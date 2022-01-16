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
	int n, a; cin >> n;
	queue<int> q;
	stack<int> s;
	string ss;
	for (int i = 0; i < n; i++) {
		cin >> a;
		q.push(a);
	}
	for (int i = 1; i < n + 1; i++) {
		s.push(i);
		ss.push_back('+');
		while (s.top() == q.front()) {
			if (s.top() == q.front()) {
				s.pop();
				q.pop();
				ss.push_back('-');
				if (s.empty()) break;
			}
		}
	}
	if (!q.empty()) {
		cout << "NO"; return 0;
	}
	for (int i = 0; i < ss.size(); i++) {
		cout << ss[i] << endl;
	}
}
