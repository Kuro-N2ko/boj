#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define endl "\n"

int main() {
	fast;
	int N; cin >> N;
	vector<int> v(N);

	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	int M; cin >> M;
	sort(v.begin(), v.end());

	for (int i = 0; i < M; i++) {
		int num;  cin >> num;
		int l = 0;  int r = v.size() - 1;
		while (l <= r) {
			int mid = (l + r) / 2;
			if (v[mid] == num) {
				cout << 1 << endl; break;
			}
			if (v[mid] > num) {
				r = mid - 1;
				if (l > r) {
					cout << 0 << endl; break;
				}
			}
			if (v[mid] < num) {
				l = mid + 1;
				if (l > r) {
					cout << 0 << endl; break;
				}
			}
		}
	}
}
