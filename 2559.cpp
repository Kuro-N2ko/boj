#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<math.h>
#include<cstring>
#include<deque>
#define endl "\n"
#define ll long long
#define pii pair<int, int>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using namespace std;

int main() {
	int N, K; cin >> N >> K;
	int mm;
	vector<int> v(N);
	int psum[100005];
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	psum[0] = v[0];
	for (int i = 1; i < N; i++) {
		psum[i] = psum[i - 1] + v[i];
	}
	int sum = 0;
	for (int i = 0; i < K; ++i) {
		sum += v[i];
	}
	mm = sum;
	for (int i = 0; i < N - K; i++) {
		mm = max(mm, psum[i + K] - psum[i]);
	}
	cout << mm;
}
