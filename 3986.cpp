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
	string s;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		stack<char> a;
		bool check = true;
		cin >> s;
		for (int j = 0; j < s.size(); j++) {
			if (s.size() % 2) {
				check = false; break;
			}
			else if (s[j] == 'A') {
				if (a.empty()) a.push('A');
				else if (a.top() == 'B') {
					a.push('A');
				}
				else if (a.top() == 'A') {
					a.pop();
				}
			}
			else if (s[j] == 'B') {
				if (a.empty()) a.push('B');
				else if (a.top() == 'A') {
					a.push('B');
				}
				else if (a.top() == 'B') {
					a.pop();
				}
			}
		}
		if (!a.empty()) check = false;
		if (check == true) cnt++;
	}
	cout << cnt;
}
