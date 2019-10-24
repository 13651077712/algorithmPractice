//============================================================================
// Name        : test1.cpp
// Author      : bxk
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

bool enQueue(int value);


class MyCircularQueue {
public:
    vector<int> data;
    int begin;
    int end;
    int size;
    /** Initialize your data structure here. Set the size of the queue to be k. */
    //初始化队列大小
    MyCircularQueue(int k) {
        //初始化头指针和尾指针
        data.resize(k);
        begin = -1;
        end = -1;
        size = k;
        cout << "创建成功，创建了一个大小为" << k << "的队列" << endl;
    }

    /** Insert an element into the circular queue. Return true if the operation is successful. */
    //添加元素
    bool enQueue(int value) {
        if(isFull()){
        	cout << "添加失败,队列以满" << endl;
            return false;
        }
        if(isEmpty()){
            begin = 0;
        }
        end = (end + 1)% size;
        data[end] = value;
        cout << "添加成功，添加第" << end << "个元素" << endl;
        return true;
    }

    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() {
        if(isEmpty()){
        	cout << "删除失败，队列为空" << endl;
            return false;
        }
        if(begin == end){
            begin = -1;
            end = -1;
            cout << "删除成功，队列最后一个元素被删除" << endl;
            return true;
        }
        begin = (begin + 1) % size;
        cout << "删除成功" << endl;
        return true;
    }

    /** Get the front item from the queue. */
    int Front() {
        if(isEmpty()){
        	cout << "队列为空，无头指针" << endl;
            return -1;
        }
        cout << "头指针为"<< data[begin] << endl;
        return data[begin];
    }

    /** Get the last item from the queue. */
    int Rear() {
        if(isEmpty()){
        	cout << "队列为空，无尾指针" << endl;
            return -1;
        }
        cout << "尾指针为"<< data[end] << endl;
        return data[end];
    }

    /** Checks whether the circular queue is empty or not. */
    bool isEmpty() {
        return end == -1;
    }

    /** Checks whether the circular queue is full or not. */
    bool isFull() {
        return ((end + 1) % size) == begin;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
