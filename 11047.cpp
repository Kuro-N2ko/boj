#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
#define endl "\n"

int main() {

	int N, K;  cin >> N >> K;
	vector<int> v(N);
	int cnt = 0;

	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end(), greater<int>());

	while (K != 0) {
		for (int i = 0; i < N; i++) {
			K / v[i];
			if (K / v[i] != 0) {
				cnt += K / v[i];
				K -= v[i] * (K / v[i]);
			}
		}
	}
	cout << cnt;
}
