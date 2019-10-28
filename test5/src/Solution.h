/*
 * Solution.h
 *
 *  Created on: 2019年10月28日
 *      Author: baixinkuo
 */

#include <iostream>
#include <list>

//  定义结构体
struct ListNode{
	int val;
	ListNode* next;
};

class Solution {
public:
	//  删除链表中节点
    void deleteNode(ListNode* node) {  //  node为要删除的节点
        node->val = node->next->val;   //  将node下一个节点的指赋给node
        node->next = node->next->next; //  node的下一个节点指向下下个节点，等同于删除node的下一个节点
    }
};
