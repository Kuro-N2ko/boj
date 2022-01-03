#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
#define endl "\n"

int main() {

	int N; cin >> N;
	long long sum = 0;

	for (int i = 0; i < N * N; i++) {
		int num;   cin >> num;
		sum += num;
	}
	cout << sum;
}
