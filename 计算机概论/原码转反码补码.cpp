#include <iostream>
#include <string>
using namespace std;
int main() {
	while (1) {
		cout << "输入原码，整数的符号位一定要写0" << endl;
		string s;
		cin >> s;
		if (s[0] == '0') {
			cout << "原码,反码,补码都是:" << s << endl;
		}
		else {
			cout << "原码:" << s << endl;
			cout << "反码:";
			cout << "1";        //符号位
			for (int i = 1; i < s.length(); i++) {
				if (s[i] == '.') cout << s[i];
				else if (s[i] == '1') cout << '0';
				else cout << '1';
			}
			cout << endl << "补码:";
			for (int i = s.length(); i >= 0; i--) {
				if (s[i] == '1') {
					cout << "1";          //符号位
					for (int m = 1; m < i; m++) {
						if (s[m] == '.') cout << s[m];
						else if (s[m] == '1') cout << '0';
						else cout << '1';
					}
					for (int m = i; m < s.length(); m++) {
						cout << s[m];
					}
					break;
				}
				else {
					cout << "ERROR" << endl;
					break;
				}
			}
			cout << endl;
		}
	}
}