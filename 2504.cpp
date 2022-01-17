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
	string s;  cin >> s;
	stack<char> a;
	int out = 0;
	int cnt = 1;
	bool check = true;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(') {
			a.push('(');
			cnt *= 2;
		}
		else if (s[i] == '[') {
			 a.push('[');
			 cnt *= 3;
		}
		else if ((s[i] == ')') and (a.empty() or a.top() != '(')) {
			check = false;
			break;
		}
		else if ((s[i] == ']') and (a.empty() or a.top() != '[')) {
			check = false;
			break;
		}
		else if (s[i] == ')') {
			if (s[i - 1] == '(') {
				out += cnt;
				a.pop();
				cnt /= 2;
			}
			else {
				cnt /= 2;
				a.pop();
			}
		}
		else if (s[i] == ']') {
			if (s[i - 1] == '[') {
				out += cnt;
				a.pop();
				cnt /= 3;
			}
			else {
				cnt /= 3;
				a.pop();
			}
		}
	}
	if (!a.empty()) check = false;
	if (check == false) {
		cout << 0; return 0;
	}
	else {
		cout << out;
	}
}
