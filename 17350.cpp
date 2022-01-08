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

vector<int> v;
queue<int> q;
stack<int> s;

int main() {

	int N; cin >> N;
	bool flag = false;

	for (int i = 0; i < N; i++) {
		string s; cin >> s;
		if (s == "anj") {
			flag = true;
		}
	}
	if (flag == true) {
		cout << "뭐야;";  return 0;
	}
	cout << "뭐야?";
}
