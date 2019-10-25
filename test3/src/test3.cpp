//============================================================================
// Name        : test3.cpp
// Author      : bxk
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Solution.h"
using namespace std;

int main() {
	int num;
	string J,S;
	Solution* sol = new Solution();
	getline(cin,J);
	getline(cin,S);
	num = sol->numJewelsInStones(J,S);
	cout << "拥有的宝石数为:" << num << endl;
	return 0;
}
