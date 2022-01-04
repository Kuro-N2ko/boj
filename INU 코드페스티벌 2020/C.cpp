#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
#define endl "\n"

int main() {

	int x, y;  cin >> x >> y;
	int sum = 0;
	if (x < y) {
		swap(x, y);
	}
	sum += x;
	sum += y;
	sum += y / 10;
	cout << sum;
}
