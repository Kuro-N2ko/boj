#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
#define endl "\n"

int main() {

	int N, X, T;  cin >> N >> X >> T;

	while (T--) {
		int A, B;
		cin >> A >> B;
		if (X == A) {
			X = B;
		}
		else if (X == B) {
				X = A;
		}
	}
	cout << X;
}
