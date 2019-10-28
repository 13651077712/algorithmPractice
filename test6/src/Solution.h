/*
 * Solution.h
 *
 *  Created on: 2019年10月28日
 *      Author: baixinkuo
 */

#ifndef SOLUTION_H_
#define SOLUTION_H_

#include <string>
using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int l=0,r=0,count=0;
        for(auto a:s){
            if(a=='L'){
                l++;
            }else{
                r++;
            }if(l==r){
                count++;
            }
        }
        return count;
    }
};

#endif /* SOLUTION_H_ */
