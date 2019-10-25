/*
 * Solution.h
 *
 *  Created on: 2019年10月25日
 *      Author: baixinkuo
 */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
    	   //  正循环
        // for(int i=0;i!=address.length();++i){
        //     if(address[i]=='.'){
        //         address.insert(i+1,"]");
        //         address.insert(i,"[");
        //         i+=2;
        //     }
        // }

    	//   逆循环
        for(int i=address.length()-1;i!=-1;--i){
            if(address[i]=='.'){
                address.insert(i+1,"]");
                address.insert(i,"[");
            }
        }
        return address;
    }
};
