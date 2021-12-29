#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

int main() {
	int N; cin >> N;
	vector<int> v(N);
	int cnt = 0;

	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (v[i] == 0 and cnt == 3 * j) {
				cnt++;
			}
			if (v[i] == 1 and cnt == 3 * j + 1) {
				cnt++;
			}
			if (v[i] == 2 and cnt == 3 * j + 2) {
				cnt++;
			}
		}
	}
	cout << cnt;
}
