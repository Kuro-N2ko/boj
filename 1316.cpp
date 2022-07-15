#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int N; cin >> N;
	string s;
	int num = 0;
	for (int i = 0; i < N; i++) {
		cin >> s;
		int a = 0, b = 0;
		for (int j = 0; j < s.size() - 1; j++) {
			if (s[j] == s[j + 1]) {
				a++;
			}
		}
		sort(s.begin(), s.end());
		for (int j = 0; j < s.size() - 1; j++) {
			if (s[j] == s[j + 1]) {
				b++;
			}
		}
		if (a == b) {
			num++;
		}
	}
	cout << num;
}
