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
#define fast cin.tie(0); cin.sync_with_stdio(0)
using namespace std;

int main() {
	fast;
	vector<ll> v;
	vector<ll> psum;
	int N;  cin >> N;
	for (int i = 0; i < N; i++) {
		int a; cin >> a;
		v.push_back(a);
	}
	psum.push_back(0);
	for (int i = 1; i < N; i++) {
		psum.push_back(psum[i - 1] + v[i]);
	}
	ll sum = 0;
	for (int i = 0; i < N; i++) {
		sum += v[i] * (psum[N - 1] - psum[i]);
	}
	cout << sum;
}
