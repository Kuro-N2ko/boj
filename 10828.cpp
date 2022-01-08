#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<math.h>

using namespace std;
#define endl "\n"
#define ll long long
#define pii pair<int, int>

string s;
stack<int> a;

int main() {

	int N;  cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> s;
		if (s == "push") {
			int x;  cin >> x;
			a.push(x);
		}
		if (s == "pop") {
			if (!a.empty()) {
				cout << a.top() << "\n";
				a.pop();
			}
			else {
				cout << -1 << endl;
			}
		}
		if (s == "size") {
			cout << a.size() << endl;
		}
		if (s == "empty") {
			if (a.empty()) {
				cout << 1 << endl;
			}
			else {
				cout << 0 << endl;
			}
		}
		if (s == "top") {
			if (!a.empty()) cout << a.top() << "\n";
			if (a.empty()) {
				cout << -1 << endl;
			}
		}
	}
}
