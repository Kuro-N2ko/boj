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
	deque<int> d;
	int N, M; cin >> N >> M;
	int out;
	int idx;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		d.push_back(i + 1);
	}
	while (M--) {
		cin >> out;
		for (int i = 0; i < d.size(); i++) {
			if (d[i] == out) {
				idx = i; break;
			}
		}
		if (d.size() - idx > idx) {
			while (true) {
				if (d.front() == out) {
					d.pop_front();  break;
				}
				else {
					d.push_back(d.front());
					d.pop_front();
					cnt++;
				}

			}
		}
		else {
			while (true) {
				if (d.front() == out) {
					d.pop_front();  break;
				}
				else {
					d.push_front(d.back());
					d.pop_back();
					cnt++;
				}
			}
		}
	}
	cout << cnt;
}
