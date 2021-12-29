#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
#define endl "\n"

int main() {

	stack<char> s;
	int cnt = 0;
	string str; cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') {
			if (str[i + 1] == ')') {
				cnt += s.size();
			}
			else s.push('(');
		}
		else {
			if (str[i - 1] == '(') continue;
			else {
				cnt++;
				s.pop();
			}
		}
	}
	cout << cnt;
}
