#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
#define endl "\n"
#define ll long long

int main() {

	int N; cin >> N;
	vector<ll> A(100);
	vector<ll> B(100);
	A[3] = 0;
	A[4] = 1;
	A[5] = 2;
	B[1] = 1;
	B[2] = 1;
	B[3] = 2;
	B[4] = 3;
	B[5] = 5;
	for (int i = 6; i < 100; i++) {
		A[i] = A[i - 1] + A[i - 2];
		B[i] = B[i - 1] + A[i];
	}
	cout << B[N];
}
