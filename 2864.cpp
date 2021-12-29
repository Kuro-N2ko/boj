#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

int main() {

	string A; cin >> A;
	string B; cin >> B;
	int mn = 0;
	int mv = 0;

	for (int i = 0; i < A.size(); i++) {
		if (A[i] == '6') {
			A[i] = '5';
		}
	}
	for (int i = 0; i < B.size(); i++) {
		if (B[i] == '6') {
			B[i] = '5';
		}
	}
	mn = stoi(A) + stoi(B);
	cout << mn << " ";

	for (int i = 0; i < A.size(); i++) {
		if (A[i] == '5') {
			A[i] = '6';
		}
	}
	for (int i = 0; i < B.size(); i++) {
		if (B[i] == '5') {
			B[i] = '6';
		}
	}
	mv = stoi(A) + stoi(B);
	cout << mv;
}
