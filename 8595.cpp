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

int main() {

	ll n; cin >> n;
	string s;  cin >> s;
	string a;
	ll sum=0;
	
	
	for (int i = 0; i < s.size(); i++) {
		if (s[i] < 'A') {
			a.push_back(s[i]);
			if (s[i + 1] >= 'A') {
				ll num = stoi(a);
				sum += num;
				a.clear();
			}
		}
		if (i == s.size() - 1 and a.size()) {
			ll num = stoi(a);
			sum += num;
		}
	}
	cout << sum;
}
