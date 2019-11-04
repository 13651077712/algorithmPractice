//============================================================================
// Name        : test7.cpp
// Author      : bxk
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
string removeOuterParentheses(string S);

int main() {
	string S,result;
	getline(cin,S);
	result = removeOuterParentheses(S);
	cout << result ;
	return 0;
}
string removeOuterParentheses(string S) {
	int num = 0;
	string s1, s2, s3;
	int j = 0, len = 0;
	for (unsigned int i = 0; i < S.length(); ++i) {
		if (S[i] == '(') {
			++num;
		}
		if (S[i] == ')') {
			--num;
		}
		if (num == 0) {
			len = i - j;
			s1 = S.substr(j, len);
			s2 = s1.substr(1, s1.length() - 1);
			s3 += s2;
			j = i + 1;
		}
	}
	return s3;
}
