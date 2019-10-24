//============================================================================
// Name        : test2.cpp
// Author      : bxk
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include "Solution.h"
using namespace std;


int main() {
	vector<int> guess;
	vector<int> answer;
	int m;
	Solution* sol = new Solution();
	cout << "请输入小A猜的三个值，在1～3之间:";
	for(int i=0;i!=3;++i){
		cin >> m;
		guess.push_back(m);
	}
	cout << "请输入小B猜的三个值，在1～3之间:";
	for(int i=0;i!=3;++i){
		cin >> m;
		answer.push_back(m);
	}
	sol->game(guess,answer);
	return 0;
}
