#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
#define endl "\n"

int main() {

	vector<long long> v(110);
	v[1] = 1;
	v[2] = 1;
	v[3] = 1;
	v[4] = 2;
	v[5] = 2;
	v[6] = 3;
	v[7] = 4;
	v[8] = 5;
	v[9] = 7;
	v[10] = 9;
	for (int i = 11; i < 101; i++) {
		v[i] = v[i - 1] + v[i - 5];
	}

	int T; cin >> T;
	while (T--) {
		int N; cin >> N;
		cout << v[N] << endl;
	}
}
