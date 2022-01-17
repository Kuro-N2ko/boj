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
	while (true) {
		string ss;
		getline(cin, ss);
		if (ss == ".") break;
		stack<char> s;
		bool check = true;
		for (int i = 0; i < ss.size(); i++) {
			if (ss[i] == '(') {
				s.push('(');
			}
			if (ss[i] == '[') {
				s.push('[');
			}
			else if (ss[i] == ')') {
				if (s.empty()) {
					check = false;
				}
				else if (s.top() == '(') {
					s.pop();
				}
				else if (s.top() == '[') {
					check = false;
				}
			}
			else if (ss[i] == ']') {
				if (s.empty()) {
					check = false; break;
				}
				else if (s.top() == '[') {
					s.pop();
				}
				else if (s.top() == '(') {
					check = false; break;
				}
			}
			if (check == false) break;
		}
		if (!s.empty()) check = false;
		if (check) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}
