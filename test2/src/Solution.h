/*
 * test2.h
 *
 *  Created on: 2019年10月24日
 *      Author: baixinkuo
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int game(vector<int>& guess, vector<int>& answer) {
    	int count = ((guess[0] == answer [0]) + (guess[1] == answer[1]) + (guess[2] == answer[2]));
    	cout << "小B猜对次数为：" << count << endl;
        return count;
    }
};
