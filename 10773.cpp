#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
#define endl "\n"

int main() {

	int N; cin >> N;
	stack<int> s;
	int a;
	int cnt = 0;

	for (int i = 0; i < N; i++) {
		cin >> a;
		if (a != 0) {
			s.push(a);
		}
		else s.pop();
	}
	while (!s.empty()) {
		cnt += s.top();
		s.pop();
	}
	cout << cnt;
}
