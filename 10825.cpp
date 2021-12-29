#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
#define endl "\n"

struct st {
	string name;
	int a, b, c;
};

bool cmp(st s1, st s2) {
	if (s1.a == s2.a and s1.b == s2.b and s1.c == s2.c)  return s1.name < s2.name;
	if (s1.a == s2.a and s1.b == s2.b) return s1.c > s2.c;
	if (s1.a == s2.a) return s1.b < s2.b;
	return s1.a > s2.a;
}

int main() {
	int N; cin >> N;
	vector<st> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i].name >> v[i].a >> v[i].b >> v[i].c;
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < N; i++) {
		cout << v[i].name << endl;
	}
}
