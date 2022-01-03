#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
#define endl "\n"

int main() {

	int N;  cin >> N;
	string op;
	int rD;
	int rA;
	int rB;
	
	for (int i = 0; i < N; i++) {
		vector<string> v(4);
		cin.ignore();
		cin >> op >> rD >> rA >> rB;
		
		if (op == "ADD") {
			v[0] = "00000";
		}
		if (op == "ADDC") {
			v[0] = "00001";
		}
		if (op == "SUB") {
			v[0] = "00010";
		}
		if (op == "SUBC") {
			v[0] = "00011";
		}
		if (op == "MOV") {
			v[0] = "00100";
		}
		if (op == "MOVC") {
			v[0] = "00101";
		}
		if (op == "AND") {
			v[0] = "00110";
		}
		if (op == "ANDC") {
			v[0] = "00111";
		}
		if (op == "OR") {
			v[0] = "01000";
		}
		if (op == "ORC") {
			v[0] = "01001";
		}
		if (op == "NOT") {
			v[0] = "01010";
		}
		if (op == "MULT") {
			v[0] = "01100";
		}
		if (op == "MULTC") {
			v[0] = "01101";
		}
		if (op == "LSFTL") {
			v[0] = "01110";
		}
		if (op == "LSFTLC") {
			v[0] = "01111";
		}
		if (op == "LSFTR") {
			v[0] = "10000";
		}
		if (op == "LSFTRC") {
			v[0] = "10001";
		}
		if (op == "ASFTR") {
			v[0] = "10010";
		}
		if (op == "ASFTRC") {
			v[0] = "10011";
		}
		if (op == "RL") {
			v[0] = "10100";
		}
		if (op == "RLC") {
			v[0] = "10101";
		}
		if (op == "RR") {
			v[0] = "10110";
		}
		if (op == "RRC") {
			v[0] = "10111";
		}
		if (rD == 0) {
			v[1] = "000";
		}
		if (rD == 1) {
			v[1] = "001";
		}
		if (rD == 2) {
			v[1] = "010";
		}
		if (rD == 3) {
			v[1] = "011";
		}
		if (rD ==4 ) {
			v[1] = "100";
		}
		if (rD == 5) {
			v[1] = "101";
		}
		if (rD == 6) {
			v[1] = "110";
		}
		if (rD == 7) {
			v[1] = "111";
		}
		if (rA == 0) {
			v[2] = "000";
		}
		if (rA == 1) {
			v[2] = "001";
		}
		if (rA == 2) {
			v[2] = "010";
		}
		if (rA == 3) {
			v[2] = "011";
		}
		if (rA == 4) {
			v[2] = "100";
		}
		if (rA == 5) {
			v[2] = "101";
		}
		if (rA == 6) {
			v[2] = "110";
		}
		if (rA == 7) {
			v[2] = "111";
		}
		if (rB == 0) {
			v[3] = "000";
		}
		if (rB == 1) {
			v[3] = "001";
		}
		if (rB == 2) {
			v[3] = "010";
		}
		if (rB == 3) {
			v[3] = "011";
		}
		if (rB == 4) {
			v[3] = "100";
		}
		if (rB == 5) {
			v[3] = "101";
		}
		if (rB == 6) {
			v[3] = "110";
		}
		if (rB == 7) {
			v[3] = "111";
		}
		if (rB == 8) {
			v[3] = "1000";
		}
		if (rB == 9) {
			v[3] = "1001";
		}
		if (rB == 10) {
			v[3] = "1010";
		}
		if (rB == 11) {
			v[3] = "1011";
		}
		if (rB == 12) {
			v[3] = "1100";
		}
		if (rB == 13) {
			v[3] = "1101";
		}
		if (rB == 14) {
			v[3] = "1110";
		}
		if (rB == 15) {
			v[3] = "1111";
		}
		if (op == "MOV" or op == "MOVC" or op == "NOT") {
			if (op.back() == 'C') {
				if (rB == 0 or rB == 1 or rB == 2 or rB == 3 or rB == 4 or rB == 5 or rB == 6 or rB == 7) {
					cout << v[0] << "0" << v[1] << "0000" << v[3] << endl;
				}
				else {
					cout << v[0] << "0" << v[1] << "000" << v[3] << endl;
				}
			}
			else {
				cout << v[0] << "0" << v[1] << "000" << v[3] << "0" << endl;
			}
		}
		else {
			if (op.back() == 'C') {
				if (rB == 0 or rB ==1 or rB == 2 or rB == 3 or rB ==4 or rB == 5 or rB ==6 or rB == 7) {
					cout << v[0] << "0" << v[1] << v[2] << "0" << v[3] << endl;
				}
				else {
					cout << v[0] << "0" << v[1] << v[2] << v[3] << endl;
				}
			}
			else {
				cout << v[0] << "0" << v[1] << v[2] << v[3] << "0" << endl;
			}
		}
		// cout << v[0] << "\n";
	}
}
