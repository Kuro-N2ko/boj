#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

int main() {

	int N; cin >> N;
	int cnt = 0;

	if (N % 5 == 1) {
		if (N >= 6) {
			cnt = N / 5 + 1;
			cout << cnt;
		}
		else cout << -1;
	}
	if (N % 5 == 2) {
		if (N >= 12) {
			cnt = N / 5 + 2;
			cout << cnt;
		}
		else cout << -1;
	}
	if (N % 5 == 3) {
		cout << N / 5 + 1;
	}
	if (N % 5 == 4) {
		if (N >= 9) {
			cnt = N / 5 + 2;
			cout << cnt;
		}
		else cout << -1;
	}
	if (N % 5 == 0) {
		cout << N / 5;
	}
}
