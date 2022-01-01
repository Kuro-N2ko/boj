#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

int main() {

	int N, M, J;  cin >> N >> M;
	int j; cin >> j;
	int a = 1;  int b = M;  int c;
	int cnt = 0;

	for (int i = 0; i < j; i++) {
		cin >> J;
		if (a <= J and b >= J) {}
		if (b < J) {
			c = J - b;
			cnt += c;
			a = a + c;
			b = J;
		}
		if (J < a) {
			c = a - J;
			cnt += c;
			b = b - c;
			a = J;
		}
	}
	cout << cnt;
}
