#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<math.h>
#include<algorithm>
#include <cstring>

using namespace std;

int main() {
	int T; cin >> T;
	
	while (T--) {
		int J, N;
		cin >> J >> N;
		vector<int> v(N);
		for (int i = 0; i < N; i++) {
			int a, b;
			cin >> a >> b;
			v[i] = a * b;
		}
		sort(v.begin(), v.end(), greater<int>());
		int cnt = 0, sum = 0;
		for (int i = 0; i < N; i++) {
			cnt++;
			sum += v[i];
			if (sum >= J) break;
		}
		cout << cnt << endl;
	}
}
