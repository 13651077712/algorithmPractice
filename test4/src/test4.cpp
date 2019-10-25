//============================================================================
// Name        : test4.cpp
// Author      : bxk
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Solution.h"
using namespace std;

int main() {
	string ip,ipX;
	cout << "请输入一个IP地址:";
	getline(cin,ip);
	Solution* sol = new Solution();
	ipX = sol->defangIPaddr(ip);
	cout << "转换成无效ip为:" << ipX << endl;
	return 0;
}
