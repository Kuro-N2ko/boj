#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
#define endl "\n"

int main() {
	vector<int> v(11);
	v[1] = 1;
	v[2] = 2;
	v[3] = 4;

	for (int i = 4; i <= 10; i++) {
		v[i] = v[i - 1] + v[i - 2] + v[i - 3];
	}
	int T; cin >> T;
	while (T--) {
		int N;  cin >> N;		
		cout << v[N] << endl;
	}
}
