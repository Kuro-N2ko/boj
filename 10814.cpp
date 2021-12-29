#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

bool cmp(pair<pair<int, string>, int > p1, pair<pair<int, string>, int> p2) {
	if (p1.first.first == p2.first.first) return p1.second < p2.second;
	return p1.first.first < p2.first.first;
}

int main() {

	int N; cin >> N;
	vector<pair<pair<int, string>,int>> v(N);


	for (int i = 0; i < N; i++) {
		cin >> v[i].first.first >> v[i].first.second;
		v[i].second = i;
	}
	sort(v.begin(), v.end(),cmp);

	for (int i = 0; i < N; i++) {
		cout << v[i].first.first << " " << v[i].first.second << "\n";
	}
}
