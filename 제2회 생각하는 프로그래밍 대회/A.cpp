#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
#define endl "\n"

int main() {

	int a, b, c;
	char d, e;

	cin >> a >> d >> b >> e >> c;
	int arr[2] = {};

	if (d == '+' and e == '+') {
		arr[0] = (a + b) + c;
		arr[1] = a + (b + c);
	}
	if (d == '+' and e == '-') {
		arr[0] = (a + b) - c;
		arr[1] = a + (b - c);
	}
	if (d == '+' and e == '*') {
		arr[0] = (a + b) * c;
		arr[1] = a + (b * c);
	}
	if (d == '+' and e == '/') {
		arr[0] = (a + b) / c;
		arr[1] = a + (b / c);
	}
	if (d == '-' and e == '+') {
		arr[0] = (a - b) + c;
		arr[1] = a - (b + c);
	}
	if (d == '-' and e == '-') {
		arr[0] = (a - b) - c;
		arr[1] = a - (b - c);
	}
	if (d == '-' and e == '*') {
		arr[0] = (a - b) * c;
		arr[1] = a - (b * c);
	}
	if (d == '-' and e == '/') {
		arr[0] = (a - b) / c;
		arr[1] = a - (b / c);
	}
	if (d == '*' and e == '+') {
		arr[0] = (a * b) + c;
		arr[1] = a * (b + c);
	}
	if (d == '*' and e == '-') {
		arr[0] = (a * b) - c;
		arr[1] = a * (b - c);
	}
	if (d == '*' and e == '*') {
		arr[0] = (a * b) * c;
		arr[1] = a * (b * c);
	}
	if (d == '*' and e == '/') {
		arr[0] = (a * b) / c;
		arr[1] = a * (b / c);
	}
	if (d == '/' and e == '+') {
		arr[0] = (a / b) + c;
		arr[1] = a / (b + c);
	}
	if (d == '/' and e == '-') {
		arr[0] = (a / b) - c;
		arr[1] = a / (b - c);
	}
	if (d == '/' and e == '*') {
		arr[0] = (a / b) * c;
		arr[1] = a / (b * c);
	}
	if (d == '/' and e == '/') {
		arr[0] = (a / b) / c;
		arr[1] = a / (b / c);
	}

	sort(arr, arr + 2);
	cout << arr[0] << endl << arr[1];
}
