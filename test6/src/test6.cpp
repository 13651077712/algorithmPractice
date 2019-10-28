//============================================================================
// Name        : test6.cpp
// Author      : bxk
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Solution.h"
using namespace std;

int main() {
	string s;
	int count;
	Solution* sol = new Solution();
	cout << "输入一行只由L和R组成的字符串：" << endl;
	getline(cin,s);
	count = sol->balancedStringSplit(s);
	cout << "平衡字符串有： " << count << "个";
	return 0;
}
