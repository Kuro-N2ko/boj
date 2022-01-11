#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<math.h>

using namespace std;
#define endl "\n"
#define ll long long
#define pii pair<int, int>

int main() {

	string s; cin >> s;
	int mx = 0;
	int a = 0, b = 0;
	int arr[10] = {};
	for (int i = 0; i < s.size(); i++) {
		arr[s[i] - '0']++;
	}
	for (int i = 0; i < 6; i++) {
		a = max(a, arr[i]);
	}
	for (int i = 7; i < 9; i++) {
		b = max(b, arr[i]);
	}
	mx = max(a, b);
	if (mx >= (arr[6] + arr[9] + 1) / 2) {
		cout << mx;
	}
	if (mx < (arr[6] + arr[9] + 1) / 2) {
		cout << (arr[6] + arr[9] + 1) / 2;
	}
}
