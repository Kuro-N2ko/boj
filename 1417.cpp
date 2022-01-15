#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<math.h>
#include<cstring>

using namespace std;
#define endl "\n"
#define ll long long
#define pii pair<int, int>

int main() {
	int N;  cin >> N;
	int a; cin >> a;
	int cnt = 0;
	vector<int> v(N - 1);
	if (N == 1) {
		cout << 0; return 0;
	}
	for (int i = 0; i < N - 1; i++) {
		cin >> v[i];
	}
	while (true) {
		sort(v.begin(), v.end(), greater<int>());
		if (a <= v[0]) {
			v[0] = v[0] - 1;
			a = a + 1;
			cnt++;
		}
		else if (a > v[0]) {
			cout << cnt;
			return 0;
		}
	}
}
