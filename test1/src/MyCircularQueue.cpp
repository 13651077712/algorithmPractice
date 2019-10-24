/*
 * test1.cpp
 *
 *  Created on: 2019年10月24日
 *      Author: baixinkuo
 */
#include <iostream>
#include "MyCircularQueue.h"
using namespace std;

int main(){
	MyCircularQueue* que = new MyCircularQueue(3);
   que->enQueue(1);
   que->enQueue(2);
   que->enQueue(3);
   que->enQueue(4);
   que->Front();
   que->Rear();
   que->deQueue();
   que->deQueue();
   que->deQueue();
   que->deQueue();
   que->Front();
   que->Rear();

}


